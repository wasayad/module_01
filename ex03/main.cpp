#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
   ZombieHorde* test = new ZombieHorde(2);
   test->announce();
   delete test;
}