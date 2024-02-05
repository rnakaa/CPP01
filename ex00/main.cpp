#include "Zombie.hpp"


int main(){
	Zombie *zombie2;

	zombie2 = newZombie("zombie2");
	zombie2->announce();
	randomChump("namunamu");

	delete zombie2;
}

