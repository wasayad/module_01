#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <string>
#include <iostream>
#include <cctype>
#include "Zombie.hpp"

class   ZombieEvent
{
    public:
        ZombieEvent(std::string type);
        ~ZombieEvent();
        Zombie* newZombie(std::string name);
        Zombie* randomChump(void);
        void    setType(std::string type);
    private:
        std::string setZombieType;
};

#endif