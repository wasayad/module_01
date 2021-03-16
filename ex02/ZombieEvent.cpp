#include <string>
#include <iostream>
#include <cctype>
#include <time.h>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string ntype): setZombieType(ntype)
{

}

ZombieEvent::~ZombieEvent()
{

}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* test = new Zombie(setZombieType, name);
    return (test);
}

Zombie* ZombieEvent::randomChump(void)
{
    int iSecret;
    std::string name;
    std::string     str[10] = {"brute", "thor", "mufi", "fumos", "arkus", "jhon", "stef", "debile", "ggwp", "klank"};
    srand (time(NULL));
    iSecret = rand() % 10;
    name = str[iSecret];
    Zombie* test = new Zombie(setZombieType, name);
    return (test);
}

void    ZombieEvent::setType(std::string type)
{
    setZombieType = type;
}