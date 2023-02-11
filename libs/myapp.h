
#include<vector>
#include<map>

#include<string>
#include<fstream>

namespace TotemApplication
{
    typedef struct paragraph
    {
        uint64_t PRIMARY_KEY=0;
        std::string header;
        std::string content;
    };
    typedef struct AnimalData
    {
        public:
        std::string nome,categoria;
        std::string imagePath;
        std::vector<paragraph> paragraphs;
    };


    std::map<std::string,AnimalData> collection;

    void loadfile(std::string path)
    {
        //updates everything
    }
}

