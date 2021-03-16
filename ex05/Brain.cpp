#include <string>
#include <iostream>
#include <cctype>
#include "Brain.hpp"

Brain::Brain()
{
    address = this;
}

Brain::~Brain()
{

}
const void*    Brain::identify() const
{
    return (address);
}