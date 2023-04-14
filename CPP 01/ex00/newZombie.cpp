#include "Zombie.hpp"


Zombie *newZombie(std::string name)
{
    Zombie  *zombie = new Zombie(name);
    zombie->set_indic_heap(true);
	return zombie;
}

