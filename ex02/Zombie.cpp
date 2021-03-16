#include <string>
#include <iostream>
#include <cctype>
#include "Zombie.hpp"

Zombie::Zombie(std::string ntype, std::string nname): type(ntype), name(nname)
{
    std::cout<<"Zombie "<<nname<<" of type "<< ntype <<" has spawned\n";
}

Zombie::~Zombie()
{

}

void    Zombie::advert()
{
    std::cout<<"<"<<name<< "("<<type<<")"<<"> Braiiiiiiinnnssss ...\n";
}