#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
   ZombieHorde* test = new ZombieHorde(10);
   test->announce();
   delete test;
}
