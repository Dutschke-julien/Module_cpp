#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


void randomChump();

class Zombie {
    
	public:
        Zombie();
        
		Zombie(std::string name);
        
		void announce() const;

		~Zombie();

	private:
		std::string name;
};

void randomChump();

Zombie* zombieHorde( int N, std::string name);

Zombie* newZombie( std::string name);

void announceHorde(int size, Zombie* horde);

#endif
