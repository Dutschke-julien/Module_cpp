#include "Zombie.hpp"

int main() 
{
    Zombie zombie1("Zombie 1");
    zombie1.announce();

	std::cout << "---------\n\n";

    Zombie* zombie2 = newZombie("Zombie 2");
    zombie2->announce();


	std::cout << "---------\n\n";
    randomChump();

    return 0;
}

