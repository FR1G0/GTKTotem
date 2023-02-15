#include <iostream>

#include "../libs/common.hpp"


int main()
{
    parsers::CSV::Document xml("data/test.csv");
    xml.display();
    return 0;
}