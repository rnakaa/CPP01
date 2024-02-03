#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name){
	_name = name;
	_weapon = NULL;
}

HumanB::~HumanB(){
}

void HumanB::attack(){
	if (_weapon == NULL){
		std::cout << this->_name << "dose not have a weapon." << std::endl;
	}
	else{
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
}
