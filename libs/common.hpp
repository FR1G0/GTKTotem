#pragma once

#include<iostream>
#include<fstream>

#include<string>

#include<vector>
#include<map>

namespace fixed 
{
    std::string substr(std::string Text,long start,long end)
    {
        return std::string(Text.begin()+start,Text.begin()+end+1);
    }
    long findfirst(std::string Text,char target)
    {
        long counter=0;
        for(char x : Text)
        {
            if(x==target) {return counter;}
            counter++;
        }
        return 0;
    }
}

namespace filestream
{
    std::string getFileContents(std::string filename)
    {
        std::ifstream file(filename);
        if(!file.is_open()) {throw std::runtime_error("\n[ERROR] Exception thrown: Could not open file \""+filename+"\" \n");}
        std::string contents((std::istreambuf_iterator<char>(file)),std::istreambuf_iterator<char>());
        file.close();
        return contents;
    }

    void writefile(std::string filename,std::string contents)
    {
        std::ofstream file(filename,std::ios::app);
        if(!file.is_open()) {throw std::runtime_error("\n[ERROR] Exception thrown: Could not open file \""+filename+"\"\n");}
        file<<contents;
        file.close();
    }
}

namespace wxConverter
{
    std::string wxString_to_string(wxString sample) {return std::string(sample.mb_str());}
    wxString string_to_wxString(std::string sample)
    {
        wxString *returnValue = new wxString(sample.c_str(),wxConvUTF8);
        return *returnValue;
    }
}

namespace parsers
{
    namespace CSV
    {
        struct Element
        {
            uint64_t Index = 0;
            std::vector<std::string> Values;
        };
        class Document
        {
            protected:
            uint64_t RealIndex;
            std::vector<Element*> vElements;
            virtual void parse(std::string csvText)
            {
                if(fixed::findfirst(csvText,',')==0) {return;}
                Element* nuovo = new Element; 
                nuovo->Index = 1 + RealIndex;
                do
                {
                    nuovo->Values.push_back(fixed::substr(csvText,0,fixed::findfirst(csvText,',')-1)); //inserts text
                    csvText.erase(csvText.begin(),csvText.begin()+fixed::findfirst(csvText,',')+1); //erases last text
                } while(fixed::findfirst(csvText,',')!=0);
                vElements.push_back(nuovo);
                RealIndex++;
                return;
            }
            void readfilelines(std::string filePath)
            {
                std::ifstream filestream(filePath);
                if(filestream.is_open())
                {
                    std::string line;
                    while(std::getline(filestream,line))
                    {
                        parse(line);
                    }
                    filestream.close();
                }
                filestream.close();
            }
            public:
            Document(std::string filePath)
            {
                readfilelines(filePath);
            }
            void display()
            {
                for(auto& itr : vElements)
                {
                    std::cout<<itr->Index<<" >\t";
                    for(auto& itr2: itr->Values)
                    {
                        std::cout<<" "<<itr2;
                    }
                    std::cout<<"\n";
                }
            }

            std::vector<Element*> getvElements() {return vElements;}
            void append_file(std::string path) {readfilelines(path);}
        };
    }
}