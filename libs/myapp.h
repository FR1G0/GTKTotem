#pragma once

#include<vector>
#include<map>

#include<string>
#include<fstream>

#include"common.hpp"


namespace TotemApplication
{

    class AnimalData
    {
        public:
        AnimalData(std::string nome,std::string categoria):
            nome(nome),
            categoria(categoria)
            {};
        uint64_t PRIMARY_KEY=0;
        bool vertebrato;
        std::string nome,categoria = "default",imageName = "default.jpg";
        void treeActivated()
        {
            std::cout<<"\n[Work in progress] activated "<<this<<" name:"<<this->nome;
        }
        std::string getCartella() { return "data/collection/Cartella"+nome+"/"+imageName; }
        std::string getInfo () {return "data/collection/Cartella"+nome+"/"+nome+"_info.html";}
        std::string getCategoria() {return "data/categoria/"+categoria+".html";}
        std::string getHabitat () {return "data/collection/Cartella"+nome+"/"+nome+"_habitat.html";}
    };
    
    namespace Animali
    {
        class AnimaleGenerico
        {
        protected: std::string categoria = "NULL";
        public: AnimalData* data;
        public:
            AnimaleGenerico(AnimalData* reference):
                data(reference)
            {};

            virtual std::string getGerarchia() { return "";};
        };
        class Vertebrato : public AnimaleGenerico
        {
        public:
            Vertebrato(AnimalData* reference) : AnimaleGenerico::AnimaleGenerico(reference) 
                {this->data->vertebrato = true;};
            std::string getGerarchia() { return "Vertebrato -> " + categoria; }
        };
        class Invertebrato : public AnimaleGenerico
        {
        public:
            Invertebrato(AnimalData* reference) : AnimaleGenerico::AnimaleGenerico(reference) 
                {this->data->vertebrato = false;};
            std::string getGerarchia() { return "Vertebrato -> " + categoria; }
        };

        /*vertebrati*/
        class Mammifero : public Vertebrato
        {
        public:
            Mammifero(AnimalData* reference) : Vertebrato::Vertebrato(reference)
                { this->data->categoria = "mammifero"; };
        };
        class Uccello : public Vertebrato
        {
        public:
            Uccello(AnimalData* reference) : Vertebrato::Vertebrato(reference)
                { this->data->categoria = "uccello"; };
        };
        class Pesce : public Vertebrato
        {
        public:
            Pesce(AnimalData* reference) : Vertebrato::Vertebrato(reference) 
                { this->data->categoria = "pesce"; };
        };
        class Anfibio : public Vertebrato
        {
        public:
            Anfibio(AnimalData* reference) : Vertebrato::Vertebrato(reference) 
                { this->data->categoria = "anfibio"; };
        };

        /*invertebrato*/
        class Mollusco : public Invertebrato
        {
        public:
            Mollusco(AnimalData* reference) : Invertebrato::Invertebrato(reference) 
                { this->data->categoria = "mollusco"; };
        };
        class Verme : public Invertebrato
        {
        public:
            Verme(AnimalData* reference) : Invertebrato::Invertebrato(reference) 
                { this->data->categoria = "verme"; };
        };
        class Artropode : public Invertebrato
        {
        public:
            Artropode(AnimalData* reference) : Invertebrato::Invertebrato(reference)
                { this->data->categoria = "artropode"; };
        };
        class Echinoderma : public Invertebrato
        {
        public:
            Echinoderma(AnimalData* reference) : Invertebrato::Invertebrato(reference)
                { this->data->categoria = "echinoderma"; };
        };
    }
    
    class DataHandler
    {
        protected:
        public:

        //this stores the list of animals
        std::vector<Animali::AnimaleGenerico*> vDataList;

        //this stores the map of animals
        std::map<wxTreeItemId,Animali::AnimaleGenerico*> treeMap;
        
        //Totem Data setup 
        virtual void setup(parsers::CSV::Document* document)
        {
            vDataList.clear();
            for(auto& itr : document->getvElements())
            {
                AnimalData* ptr = new AnimalData(itr->Values.at(0),itr->Values.at(1));
                ptr->imageName = itr->Values.at(2);
                vDataList.push_back(new Animali::AnimaleGenerico(ptr));
            } return;
        }
        void setup(std::string filePath)
        {
            parsers::CSV::Document* document = new parsers::CSV::Document(filePath);
            setup(document);
        }
        ~DataHandler() 
        {
            for(auto& itr : vDataList) { delete itr; }
            for(auto& itr : treeMap) { delete itr.second; }
            delete this;
        }
    };
    

    void generateTree(wxTreeCtrl* targetTree,DataHandler* dataReference)
    {
        wxTreeItemId rootId = targetTree->AddRoot("Lista Animali");
        wxTreeItemId treeVertebrati = targetTree->AppendItem(rootId, "Vertebrati");
        wxTreeItemId treeInvertebrati = targetTree->AppendItem(rootId, "Invertebrati");
        dataReference->treeMap[treeVertebrati] = new Animali::Vertebrato(new AnimalData("vertebrati","NULL"));
        dataReference->treeMap[treeInvertebrati] = new Animali::Invertebrato(new AnimalData("invertebrati","NULL"));

        wxTreeItemId treeMammiferi = targetTree->AppendItem(treeVertebrati, "Mammiferi");
        wxTreeItemId treeUccelli = targetTree->AppendItem(treeVertebrati, "Uccelli");
        wxTreeItemId treePesci = targetTree->AppendItem(treeVertebrati, "Pesci");
        wxTreeItemId treeAnfibi = targetTree->AppendItem(treeVertebrati, "Anfibi");
        dataReference->treeMap[treeMammiferi] = new Animali::Mammifero(new AnimalData("mammiferi","NULL"));
        dataReference->treeMap[treeUccelli] = new Animali::Uccello(new AnimalData("uccelli","NULL"));
        dataReference->treeMap[treePesci] = new Animali::Pesce(new AnimalData("pesci","NULL"));
        dataReference->treeMap[treeAnfibi] = new Animali::Anfibio(new AnimalData("anfibi","NULL"));


        wxTreeItemId treeMolluschi = targetTree->AppendItem(treeInvertebrati, "Molluschi");
        wxTreeItemId treeVermi = targetTree->AppendItem(treeInvertebrati, "Vermi");
        wxTreeItemId treeAntropodi = targetTree->AppendItem(treeInvertebrati, "Artropodi");
        wxTreeItemId treeEchiodermi = targetTree->AppendItem(treeInvertebrati, "Echinodermi");
        dataReference->treeMap[treeMolluschi] = new Animali::Mollusco(new AnimalData("molluschi","NULL"));
        dataReference->treeMap[treeVermi] = new Animali::Verme(new AnimalData("vermi","NULL"));
        dataReference->treeMap[treeAntropodi] = new Animali::Artropode(new AnimalData("artropode","NULL"));
        dataReference->treeMap[treeEchiodermi] = new Animali::Echinoderma(new AnimalData("echinoderma","NULL"));

        for(auto& itr : dataReference->vDataList)
        {
            wxTreeItemId* nuovoAnimale = new wxTreeItemId;
            if(itr->data->categoria=="mammifero") {*nuovoAnimale = targetTree->AppendItem(treeMammiferi,itr->data->nome);}
            if(itr->data->categoria=="uccello") {*nuovoAnimale = targetTree->AppendItem(treeUccelli,itr->data->nome);}
            if(itr->data->categoria=="pesce") {*nuovoAnimale = targetTree->AppendItem(treePesci,itr->data->nome);}
            if(itr->data->categoria=="anfibio") {*nuovoAnimale = targetTree->AppendItem(treeAnfibi,itr->data->nome);}
            
            if(itr->data->categoria=="mollusco") {*nuovoAnimale = targetTree->AppendItem(treeMolluschi,itr->data->nome);}
            if(itr->data->categoria=="verme") {*nuovoAnimale = targetTree->AppendItem(treeVermi,itr->data->nome);}
            if(itr->data->categoria=="artropode") {*nuovoAnimale = targetTree->AppendItem(treeAntropodi,itr->data->nome);}
            if(itr->data->categoria=="echinoderma") {*nuovoAnimale = targetTree->AppendItem(treeEchiodermi,itr->data->nome);}
            dataReference->treeMap[*nuovoAnimale] = itr;
        }
    }
    DataHandler* TotemData = new DataHandler;
    void generatefolders()
    {
        return;
    }
    void insertNewAnimale(AnimalData* data)
    {
        std::string content = data->nome+","+data->categoria+","+data->imageName+",0";
        filestream::writefile("data/Lista.csv","\n"+content+",");
        TotemData->setup("data/Lista.csv");
        return;
    }
}
