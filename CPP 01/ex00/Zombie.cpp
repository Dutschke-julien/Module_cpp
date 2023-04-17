#include "Zombie.hpp"

//Default constructor 
Zombie::Zombie() {}

bool Zombie::is_on_heap()
{
    return(this->heap);
}

//Constructor with name Arg
Zombie::Zombie(std::string name) : name(name){}


//Destructor by default
Zombie::~Zombie()
{
    std::cout << "Zombie :" << this->name << " is destroyed." << std::endl;
}

//Brainz_talking
void Zombie::announce() const
{
	std::cout << "Zombie :" << this->name << " BraiiiiiiinnnzzzZ...\n";
}
