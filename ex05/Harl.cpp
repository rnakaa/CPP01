#include "Harl.hpp"

void Harl::debug(void){
	std::cout << " love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
	std::cout << " cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
	std::cout << " think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
	std::cout << "his is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::undefined(void){
	std::cout << "error level" << std::endl;
}

void Harl::complain(std::string level){
	int id =  (level == "DEBUG")  * 1 \
			 +(level == "INFO")   * 2 \
			 +(level == "WARNING") * 3 \
			 +(level == "ERROR") * 4; 
	void (Harl::*stock[5])(void) = {
		&Harl::undefined,
		&Harl::debug,
		&Harl::info, 
		&Harl::warning, 
		&Harl::error
	};
	(this->*stock[id])();
}
