#include "Waepon.hpp"

Weapon::weapon(std::string name)
{
	this->type = name;
}

const	std::string& get_Type()
{
	const std::string& REF = this->type;
	return (REF);
}


void	set_type(std::string armement)
{
	this->type = armement;
}