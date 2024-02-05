#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void setname(std::string name);
		void announce(void);
};
Zombie *newZombie(std::string name);
void randomChump(std::string name);
Zombie *zombieHorde(int N,std::string name);
#endif
