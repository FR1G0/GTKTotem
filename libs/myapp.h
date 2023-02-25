#pragma once

#include<vector>
#include<map>

#include<string>
#include<fstream>
#include<thread>

#include"common.hpp"


namespace TotemApplication
{
    struct paragraph
    {
        uint64_t PRIMARY_KEY=0;
        std::string header;
        std::string content;
    };
    class AnimalData
    {
        public:
        AnimalData(std::string nome,std::string categoria):
            nome(nome),
            categoria(categoria)
            {};
        uint64_t PRIMARY_KEY=0;
        bool vertebrato;
        std::string nome,categoria,imageName;
        std::vector<paragraph> paragraphs;
        void treeActivated()
        {
            std::cout<<"\n[Work in progress] activated "<<this<<" name:"<<this->nome;
        }
        std::string getCartella() { return "data/Cartella"+nome+"/"+imageName; }
        std::string getInfo () {return "data/Cartella"+nome+"/"+nome+"_info.html";}
        std::string getHabitat () {return "data/Cartella"+nome+"/"+nome+"_habitat.html";}
    };
    class DataHandler
    {
        protected:
        public:

        //this stores the list of animals
        std::vector<AnimalData*> vDataList;
        //this stores the 
        std::map<wxTreeItemId,AnimalData*> treeMap;
        
        //Totem Data setup 
        virtual void setup(parsers::CSV::Document* document)
        {
            vDataList.clear();
            for(auto& itr : document->getvElements())
            {
                AnimalData* ptr = new AnimalData(itr->Values.at(0),itr->Values.at(1));
                ptr->imageName = itr->Values.at(2);
                vDataList.push_back(ptr);
            } return;
        }
        void setup(std::string filePath)
        {
            parsers::CSV::Document* document = new parsers::CSV::Document(filePath);
            setup(document);
        }
        void GenerateData()
        {
            return;
        }
    };
    

    void generateTree(wxTreeCtrl* targetTree,DataHandler* dataReference)
    {
        wxTreeItemId rootId = targetTree->AddRoot("Lista Animali");
        wxTreeItemId treeVertebrati = targetTree->AppendItem(rootId, "Vertebrati");
        wxTreeItemId treeInvertebrati = targetTree->AppendItem(rootId, "Invertebrati");
        dataReference->treeMap[treeVertebrati] = new AnimalData("vertebrati","NULL");
        dataReference->treeMap[treeInvertebrati] = new AnimalData("invertebrati","NULL");

        wxTreeItemId treeMammiferi = targetTree->AppendItem(treeVertebrati, "Mammiferi");
        wxTreeItemId treeUccelli = targetTree->AppendItem(treeVertebrati, "Uccelli");
        wxTreeItemId treePesci = targetTree->AppendItem(treeVertebrati, "Pesci");
        wxTreeItemId treeAnfibi = targetTree->AppendItem(treeVertebrati, "Anfibi");
        dataReference->treeMap[treeMammiferi] = new AnimalData("mammiferi","NULL");
        dataReference->treeMap[treeUccelli] = new AnimalData("uccelli","NULL");
        dataReference->treeMap[treePesci] = new AnimalData("pesci","NULL");
        dataReference->treeMap[treeAnfibi] = new AnimalData("anfibi","NULL");


        wxTreeItemId treeMolluschi = targetTree->AppendItem(treeInvertebrati, "Molluschi");
        wxTreeItemId treeVermi = targetTree->AppendItem(treeInvertebrati, "Vermi");
        wxTreeItemId treeAntropodi = targetTree->AppendItem(treeInvertebrati, "Artropodi");
        wxTreeItemId treeEchiodermi = targetTree->AppendItem(treeInvertebrati, "Echinodermi");
        dataReference->treeMap[treeMolluschi] = new AnimalData("molluschi","NULL");
        dataReference->treeMap[treeVermi] = new AnimalData("vermi","NULL");
        dataReference->treeMap[treeAntropodi] = new AnimalData("artropode","NULL");
        dataReference->treeMap[treeEchiodermi] = new AnimalData("echinoderma","NULL");

        for(auto& itr : dataReference->vDataList)
        {
            wxTreeItemId* nuovoAnimale = new wxTreeItemId;
            if(itr->categoria=="mammifero") {*nuovoAnimale = targetTree->AppendItem(treeMammiferi,itr->nome);}
            if(itr->categoria=="uccello") {*nuovoAnimale = targetTree->AppendItem(treeUccelli,itr->nome);}
            if(itr->categoria=="pesce") {*nuovoAnimale = targetTree->AppendItem(treePesci,itr->nome);}
            if(itr->categoria=="anfibio") {*nuovoAnimale = targetTree->AppendItem(treeAnfibi,itr->nome);}
            
            if(itr->categoria=="molluscho") {*nuovoAnimale = targetTree->AppendItem(treeMolluschi,itr->nome);}
            if(itr->categoria=="verme") {*nuovoAnimale = targetTree->AppendItem(treeVermi,itr->nome);}
            if(itr->categoria=="artropode") {*nuovoAnimale = targetTree->AppendItem(treeAntropodi,itr->nome);}
            if(itr->categoria=="echinoderma") {*nuovoAnimale = targetTree->AppendItem(treeEchiodermi,itr->nome);}
            dataReference->treeMap[*nuovoAnimale] = itr;
        }
    }
    DataHandler* TotemData = new DataHandler;
    void close()
    {
        delete TotemData;
    }
}

namespace Animali
{
    class AnimaleGenerico
    {
    protected:
        std::string categoria = "NULL";

    public:
        AnimaleGenerico(){};
        virtual std::string getGerarchia() = 0;
    };
    class Vertebrato : public AnimaleGenerico
    {
    public:
        Vertebrato(){};
        std::string getGerarchia() { return "Vertebrato -> " + categoria; }
    };
    class Invertebrato : public AnimaleGenerico
    {
    public:
        Invertebrato(){};
        std::string getGerarchia() { return "Vertebrato -> " + categoria; }
    };

    /*vertebrati*/
    class Mammifero : public Vertebrato
    {
    protected:
        Mammifero(){};
    };
    class Uccello : public Vertebrato
    {
    protected:
        Uccello(){};
    };
    class Pesce : public Vertebrato
    {
    protected:
        Pesce(){};
    };
    class Anfibio : public Vertebrato
    {
    protected:
        Anfibio(){};
    };

    /*invertebrato*/
    class Mollusco : public Invertebrato
    {
    protected:
        Mollusco(){};
    };
    class Verme : public Invertebrato
    {
    protected:
        Verme(){};
    };
    class Antropodo : public Invertebrato
    {
    protected:
        Antropodo(){};
    };
    class Echiodermo : public Invertebrato
    {
    protected:
        Echiodermo(){};
    };
}