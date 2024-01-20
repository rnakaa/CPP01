#include "Zombie.hpp"

Zombie *Zombie::zombieHorde(int N,std::string name){
	Zombie zombie[N];

	for (int i = 0;i < N;i++)
		zombie[i] = Zombie(name);
	return (zombie);
}
