#include "Harl.hpp"


int main(){
	Harl test;
	std::cout << "DEBUG   = \n";
	test.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "INFO    = \n";
	test.complain("INFO");
	std::cout << std::endl;
	std::cout << "WARNING = \n";
	test.complain("WARNING");
	std::cout << std::endl;
	std::cout << "ERROR = \n";
	test.complain("ERROR");
	std::cout << std::endl;
	std::cout << "        = \n";
	test.complain("");
	std::cout << std::endl;
}
