#include "Zombie.hpp"

#define SIZE_OF_HORDE 5

int main() 
{
    Zombie zombie1("Zombie 1");
    zombie1.announce();
	std::cout << "\n";

    Zombie* zombie2 = newZombie("Zombie 2");
    zombie2->announce();
    delete zombie2;
	std::cout << "\n";

    randomChump("Zombie 3");
    std::cout << "\n";

    Zombie horde = zombieHorde(SIZE_OF_HORDE , "Zombard de lvl 1");
    announceHorde(horde, size);
    delete[] horde;

    return 0;
}
