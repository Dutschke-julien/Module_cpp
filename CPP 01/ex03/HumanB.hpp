#ifndef HUMANB_HPP

#define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
	HumanB(std::string name);
	void attack();
	void setWeapon(Weapon armement);

	private:
	std::string name;
	Weapon armement;
}

#endif