#include <iostream>
#include <vector>
int main(int, char**){
    std::vector<std::string> strItem{"one", "two", "three", "four"};
    for(std::string str : strItem)
    {
        std::cout << str << std::endl;
    }
    return 0;
}
