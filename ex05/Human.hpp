#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>
#include <iostream>
#include <cctype>
#include "Brain.hpp"

class Human
{
    public:
        const Brain brained;
        const Brain&  getBrain() const;
        const void  *identify() const;
        Human();
        ~Human();
};

#endif