#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

class Harl{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void undefined(void);
//		void undefined(std::string lala){
//			std::cout << lala;
//		}
	public:
		// Harl();
		// ~Harl();
		void complain(std::string level);
};
#endif
