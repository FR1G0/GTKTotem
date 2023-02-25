#include <iostream>
#include<map>

int main()
{
    std::map<int,int> mapped;
    mapped[2] = 5;
    for(auto& itr : mapped)
    {
        std::cout<<itr.second<<std::endl;
    }
    return 0;
}