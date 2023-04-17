#include "Zombie.hpp"


void randomChump(std::string name)
{
    zombie zomb(name);
    zomb->announce();
}
