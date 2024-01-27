#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

class Haral{
	private:
		void debug(void);
		void info(void);
		void warming(void);
		void error(void);
	public:
		Haral();
		~Haral();
		void complain(std::string level);
};









#endif
