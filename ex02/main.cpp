#include <iostream>

int main(){
	std::string str = "HI THIS IS BRAIN";
	std::string *strinPTR = &str;
	std::string &strinREF = str;

	std::cout << "address" << std::endl;
	std::cout << "str      = " << &str << std::endl;
	std::cout << "strinPTR = " << strinPTR << std::endl;
	std::cout << "strinREF = " << &strinREF << std::endl << std::endl;

	std::cout << "value" << std::endl;
	std::cout << "str      = " << str << std::endl;
	std::cout << "strinPTR = " << *strinPTR << std::endl;
	std::cout << "strinREF = " << strinREF << std::endl;

	return (0);
}

