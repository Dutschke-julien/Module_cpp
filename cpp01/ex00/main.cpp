#include "Zombie.hpp"

int main() 
{
    Zombie zombie1("Zombie 1");
    zombie1.announce();

	std::cout << "\n";

    Zombie* zombie2 = newZombie("Zombie 2");
    zombie2->announce();
    delete zombie2;

	std::cout << "\n";
    randomChump("zombie 3 ");

    return 0;
}

