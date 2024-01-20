#include "Zombie.hpp"


int main(){
	Zombie *zombie2;

	zombie2 = Zombie::newZombie("zombie2");
	zombie2->announce();
	Zombie::randomChump("namunamu");

	delete zombie2;
}

