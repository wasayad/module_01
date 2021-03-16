#include <string>
#include <iostream>
#include <cctype>

int main(void)
{
    std::string         str = "HI THIS IS BRAIN";
    std::string         *ptr = &str;
    std::string         &ref = str;
    std::cout<<"Ptr print : "<<*ptr<<std::endl;
    std::cout<<"Ref print : "<<ref<<std::endl;
}