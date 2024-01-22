#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon{
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		Weapon();
		~Weapon();
		std::string & getType();
		std::string setType(std::string type);
};

#endif
