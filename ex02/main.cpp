#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    ZombieEvent tester = ZombieEvent("undead");
    ZombieEvent tester1 = ZombieEvent("");
    Zombie* test = tester.newZombie("tartufle");
    Zombie* test1 = tester.randomChump();
    Zombie* test2 = tester1.newZombie("");
    test2->advert();
    test->advert();
    test1->advert();
    delete test;
    delete test1;
}