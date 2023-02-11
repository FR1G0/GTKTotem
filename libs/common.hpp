#pragma once

#include<iostream>
#include<fstream>

#include<string>

#include<vector>
#include<map>
#include<ranges>


namespace fileHander
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