#include "Zombie.hpp"
#include "ZombieEvent.hpp"

//int main(void)
//{
//    ZombieEvent tester = ZombieEvent("undead");
//    ZombieEvent tester1 = ZombieEvent("");
//    Zombie* test = tester.newZombie("tartufle");
//    Zombie* test1 = tester.randomChump();
//    Zombie* test2 = tester1.newZombie("");
//    test2->advert();
//    test->advert();
//    test1->advert();
//    delete test;
//    delete test1;
//}
int		main(void)
{
	Zombie	*Jaques;
	Zombie	*Michel;

	srand(time(0));
	std::cout << "Spawning zombie on Stack:" << std::endl;
	Zombie Arta = Zombie("Arta", "Learner");
	std::cout << std::endl << "Spawning zombie Event on Heap" << std::endl;
	ZombieEvent	*School = new ZombieEvent("learner");
	std::cout << std::endl << "Setting Zombie type to pole emploi" << std::endl;
	School->setZombieType("Chomeur");
	std::cout << std::endl << "Phillipe contaminated another one" << std::endl;
	Jaques = School->newZombie("Phillipe");
	Michel = School->randomChump();
	delete School;
	delete Jaques;
	delete Michel;
	return (0);
}