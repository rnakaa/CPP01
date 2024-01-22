#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA{
	private:
		Weapon _weapon;
		std::string _name;
	public:
		HumanA(std::string name, std::string weapon);
		~HumanA();
		void attack();
};

#endif
