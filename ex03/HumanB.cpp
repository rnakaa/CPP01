#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name, std::string weapon){
	_name = name;
	_weapon.setType(weapon);
}

HumanB::HumanB(std::string name){
	_name = name;
}


HumanB::~HumanB(){
}

void HumanB::attack(){
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
