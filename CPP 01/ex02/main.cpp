#include <iostream>
#include <string>

int main()
{


    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    td::cout << "Address of the string in memory: " << &str << std::endl;
    std::cout << "Address stored in stringPTR: " << stringPTR << std::endl;
    std::cout << "Address stored in stringREF: " << &stringREF << std::endl;


    std::cout << "Valeur de la string : " << str << std::endl;
    std::cout << "Valeur pointée par stringPTR : " << *stringPTR << std::endl;
    std::cout << "Valeur pointée par stringREF : " << stringREF << std::endl;
}