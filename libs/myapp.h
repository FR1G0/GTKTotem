#pragma once

#include<vector>
#include<map>

#include<string>
#include<fstream>

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
        std::string nome,categoria,imagePath;
        std::vector<paragraph> paragraphs;
    };
    class DataHandler
    {
        public:
        std::vector<AnimalData*> vDataList;
    };


    void generateTree(wxTreeCtrl* targetTree,DataHandler* dataReference)
    {
        wxTreeItemId rootId = targetTree->AddRoot("Lista Animali");
        wxTreeItemId treeVertebrati = targetTree->AppendItem(rootId, "Vertebrati");
        wxTreeItemId treeInvertebrati = targetTree->AppendItem(rootId, "Invertebrati");

        wxTreeItemId treeMammiferi = targetTree->AppendItem(treeVertebrati, "Mammiferi");
        wxTreeItemId treeUccelli = targetTree->AppendItem(treeVertebrati, "Uccelli");
        wxTreeItemId treePesci = targetTree->AppendItem(treeVertebrati, "Pesci");
        wxTreeItemId treeAnfibi = targetTree->AppendItem(treeVertebrati, "Anfibi");

        wxTreeItemId treeMolluschi = targetTree->AppendItem(treeInvertebrati, "Molluschi");
        wxTreeItemId treeVermi = targetTree->AppendItem(treeInvertebrati, "Vermi");
        wxTreeItemId treeAntropodi = targetTree->AppendItem(treeInvertebrati, "Antropodi");
        wxTreeItemId treeEchiodermi = targetTree->AppendItem(treeInvertebrati, "Echiodermi");

        for(auto& itr : dataReference->vDataList)
        {
            if(itr->categoria=="mammifero") {targetTree->AppendItem(treeMammiferi,itr->nome);}
            if(itr->categoria=="uccello") {targetTree->AppendItem(treeUccelli,itr->nome);}
            if(itr->categoria=="pesco") {targetTree->AppendItem(treePesci,itr->nome);}
            if(itr->categoria=="anfibo") {targetTree->AppendItem(treeAnfibi,itr->nome);}
            
            if(itr->categoria=="molluscho") {targetTree->AppendItem(treeMolluschi,itr->nome);}
            if(itr->categoria=="verme") {targetTree->AppendItem(treeVermi,itr->nome);}
            if(itr->categoria=="antropodo") {targetTree->AppendItem(treeAntropodi,itr->nome);}
            if(itr->categoria=="echiodermo") {targetTree->AppendItem(treeEchiodermi,itr->nome);}
        }
    }

}
