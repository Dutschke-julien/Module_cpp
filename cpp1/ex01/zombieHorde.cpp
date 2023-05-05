#include "Zombie.hpp"

void announceHorde(int size, Zombie* horde)
{
    for (int i = 0; i < size; i++) 
    {
        horde[i].announce();
    }
}

Zombie* zombieHorde( int N, std::string name)
{
    Zombie *horde = new Zombie[N];
    
    for (int i = 0; i < N ; i++)
        horde[i] = *(newZombie(name));
    return(horde);
}