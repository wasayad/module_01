#include <string>
#include <iostream>
#include <cctype>

void memoryLeak()
{
    std::string* panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}

int main(void)
{
    memoryLeak();
}