#ifndef WEAPON_HPP

#define WEAPON_HPP

# include <iostream>
# include <string>
# include "HumanA.hpp"
# include "humanB.hpp"

class Weapon
{
	public :
	Weapon(std::string name);
	const	std::string& get_Type();
	void	set_type(std::string armement);

	private:
	std::string type;
};

#endif
