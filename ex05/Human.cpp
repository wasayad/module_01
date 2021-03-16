#include <string>
#include <iostream>
#include <cctype>
#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

const Brain& Human::getBrain() const
{
    return (brained);
}

const void*   Human::identify() const
{
    return(static_cast<Brain>(brained).identify());
}
