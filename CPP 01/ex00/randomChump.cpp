#include "Zombie.hpp"


void randomChump()
{
    std::string names[6] = {"Zombob", "Mortelette", "cerveaulent", "Braaaainzgirl", "momortel"};

    std::srand(std::time(0));
    std::string name = names[std::rand() % 5];

    Zombie zombie(name);
    zombie.announce();
}
