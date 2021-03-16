#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cctype>

class Zombie
{
    public:
        Zombie(std::string type, std::string name);
        ~Zombie();
        void    advert();

    private:
        std::string type;
        std::string name;
};

#endif