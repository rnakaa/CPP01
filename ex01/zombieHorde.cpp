#include "Zombie.hpp"

Zombie *Zombie::zombieHorde(int N,std::string name){

	if (N <= 0)
		return (NULL);

	try {
		Zombie *zombies = new Zombie[N];
		for (int i = 0;i < N;i++)
			zombies[i] = Zombie(name);
		return (zombies);
	} catch (const std::bad_alloc& e){
		std::cerr << e.what() << std::endl;
		return (NULL);		
	}
}
