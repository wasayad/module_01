#include <string>
#include <iostream>
#include <cctype>
#include <time.h>
#include "ZombieHorde.hpp"

Zombie ZombieHorde::randomChump(int    iSecret)
{
    std::string name;
    std::string     str[10] = {"brute", "thor", "mufi", "fumos", "arkus", "jhon", "stef", "debile", "ggwp", "klank"};
    name = str[iSecret];
    Zombie test = Zombie("unknown", name);
    return (test);
}

ZombieHorde::ZombieHorde(int horde_si)
{
    int iSecret;
    int     i;
    Horde = new Zombie[horde_si];
    i = -1;
    srand (time(NULL));
    horde_size = horde_si;
    while (++i < horde_si)
    {
        iSecret = rand() % 10;
        Horde[i] = randomChump(iSecret);
        Horde[i].advert();
    }
}

ZombieHorde::~ZombieHorde()
{
    delete[] Horde;
    std::cout<<"Horde has been slain\n";
}

void    ZombieHorde::announce()
{
    int     i;

    i = 0;
    while (i < horde_size)
    {
        Horde[i].advert();
        i++;
    }
}