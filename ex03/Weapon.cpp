#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	setType(type);
}

Weapon::Weapon(){
}

Weapon::~Weapon(){
}

std::string & Weapon::getType(){
	return (_type);
}

void Weapon::setType(std::string type){
		_type = type;
}
