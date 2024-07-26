#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <list>
int main(int, char**){

    std::vector<std::string> strItem{"one", "two", "three", "four"};
    std::map<int, std::string> intToStr;
    intToStr.emplace(1, strItem[0]);
    intToStr.emplace(2, strItem[1]);
    intToStr.emplace(3, strItem[2]);
    intToStr.emplace(4, strItem[3]);
    intToStr[1];
    for(auto it = intToStr.begin(); it != intToStr.end(); ++it)
    {
        std::cout << std::to_string(it->first) + ": " + it->second << std::endl;

    }
    return 0;
}
