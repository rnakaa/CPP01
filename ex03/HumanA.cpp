#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, std::string weapon){
	_name = name;
	_weapon.setType(weapon);
}

HumanA::~HumanA(){
}

void HumanA::attack(){
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
