#include "Zombie.hpp"

#define SIZE_OF_HORDE 5

int main() 
{

    Zombie *horde = zombieHorde(SIZE_OF_HORDE , "Zombard de lvl 1");
    announceHorde(SIZE_OF_HORDE, horde);
    delete[] horde;

    return 0;
}
