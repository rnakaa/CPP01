#include "Zombie.hpp"

int main(){
	Zombie *zombie3;

	zombie3 = Zombie::zombieHorde(5,"namunamu");

	if (zombie3 == NULL)
		return (0);
//	for (int i = 0;i < 5; i++){
//		zombie3[i].announce();
//	}

	delete[] zombie3;
	return (0);
}

__attribute__((destructor))
static void destructor(void){
	system("leaks -q zombie");
}
