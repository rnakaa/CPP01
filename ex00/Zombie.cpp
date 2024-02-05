#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	std::cout << "constractor" << std::endl;
	_name = name;
}

Zombie::Zombie(){
	std::cout << "constractor" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "destractor" << std::endl;
	std::cout << _name << "is dead." << std::endl;
}

void Zombie::setname(std::string name){
	_name = name;
}

void Zombie::announce(void){
	std::cout << _name << ": BraiiiiiinnnzzZ..." << std::endl;
}


