#include "Pony.hpp"


Pony::Pony(int si, std::string colo, int ag, int weigh): 
size(si), color(colo), age(ag), weight(weigh)
{

}

Pony::~Pony()
{

}

void Pony::Display_my_poney()
{
    std::cout<<"Height = "<< size<< " Color = "<< color<< " Age = " << age<< " Weight = "<< weight<<std::endl;
}

void Pony::feed_my_poney()
{
    weight = weight + 15;
}

void Pony::aging_my_poney()
{
    age = age +     1;
}