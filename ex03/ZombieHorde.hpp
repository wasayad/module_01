#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <string>
#include <iostream>
#include <cctype>
#include "Zombie.hpp"

class   ZombieHorde
{
    public:
        ZombieHorde(int horde_size);
        ~ZombieHorde();
        Zombie* randomChump(int iSecret);
        void    setType(std::string type);
        void    announce();
    private:
        int          horde_size;
        Zombie       **Horde;
};

#endif