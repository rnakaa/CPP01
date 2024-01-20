#include "Zombie.hpp"

int main(){
	Zombie *zombie3;

	zombie3 = Zombie::zombieHorde(5,"namunamu");
	for (int i = 0;i < 5; i++){
		zombie3[i].announce();
	}

	delete zombie3;
}

