#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	setType(type);
}

Weapon::Weapon(){
}

Weapon::~Weapon(std::string type){
}

std::string & Weapon::getType(){
	return (_type)
}

std::string Weapon::setType(std::type){
		_type = type;
}
