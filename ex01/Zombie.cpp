#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	std::cout << "constructor" << std::endl;
	_name = name;
}

Zombie::Zombie(){
	std::cout << "constructor" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "destructor" << std::endl;
	std::cout << _name << " is dead." << std::endl;
}

void Zombie::setname(std::string name){
	_name = name;
}

void Zombie::announce(void){
	std::cout << _name << ": BraiiiiiinnnzzZ..." << std::endl;
}

Zombie *newZombie(std::string name){
	Zombie *zombie;

	zombie = new Zombie(name);
	return (zombie);
}

void randomChump(std::string name){
	Zombie zombie(name);
	zombie.announce();
}
