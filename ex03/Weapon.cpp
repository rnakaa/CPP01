#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	setType(type);
}

Weapon::Weapon(){
}

Weapon::~Weapon(){
}

const std::string & Weapon::getType() const{
	return (this->_type);
}

void Weapon::setType(std::string type){
		_type = type;
}
