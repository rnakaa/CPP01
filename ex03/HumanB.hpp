#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB{
	private:
		Weapon _weapon;
		std::string _name;
	public:
		HumanB(std::string name);
		HumanB(std::string name, std::string weapon);
		~HumanB();
		setWeapon(Weapon weapon);
		void attack();
};

#endif
