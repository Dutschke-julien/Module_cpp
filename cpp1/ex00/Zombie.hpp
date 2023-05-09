#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>



class Zombie {
    
	public:
        Zombie();
        
		Zombie(std::string name);
        
		void announce() const;

		~Zombie();

		bool is_on_heap();
	private:
		bool heap;
		std::string name;
};

void randomChump(std::string name);

Zombie* newZombie( std::string name );

#endif
