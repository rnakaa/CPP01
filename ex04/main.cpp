#include "main.hpp"


int main(){
	std::string filename;
	std::string s1, s2;
	std::string str;
	std::cin >> filename >> s1 >> s2;

	std::ifstream ifs(filename);
	if (ifs.fail()) {
		std::cerr << "Failed to open file." << std::endl;
		return (1);
	}

	std::string newfile = filename + ".replace";
	std::ofstream ofs(newfile);
	if (ofs.fail()){
		std::cerr << "Failed to open " << std::endl;
		return (1);
	}
	while (getline(ifs, str)){
		ofs << str << std::endl;
	}
}
