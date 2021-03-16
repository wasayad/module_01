#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include <cctype>

class Brain
{
    public:
        Brain();
        ~Brain();
        const void    *identify() const;

    private:
        const void    *address;
};

#endif