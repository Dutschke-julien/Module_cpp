#include "Zombie.hpp"

//Default constructor 
Zombie::Zombie() : heap(false){}

void Zombie::set_indic_heap(bool value)
{
    this->heap = value;
}

bool Zombie::is_on_heap()
{
    return(this->heap);
}

//Constructor with name Arg
Zombie::Zombie(std::string name) : name(name), heap(false){}


//Destructor by default
Zombie::~Zombie()
{
    std::cout << "Zombie :" << this->name << " is destroyed." << std::endl;
    if (this->is_on_heap() == true)
        delete this;
}

//Brainz_talking
void Zombie::announce() const
{
	std::cout << "Zombie :" << this->name << " BraiiiiiiinnnzzzZ...\n";
}
