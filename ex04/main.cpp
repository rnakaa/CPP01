#include "main.hpp"

int main(int argc, char **argv){

	if (argc != 4){
		std::cout << "invalid arguments." << std::endl;
		return (1);
	}

	std::string oldfile = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;

	std::ifstream ifs(oldfile);
	if (ifs.fail()) {
		std::cerr << "Failed to open " << oldfile + "." << std::endl;
		return (1);
	}

	std::string newfile = oldfile + ".replace";
	std::ofstream ofs(newfile);
	if (ofs.fail()){
		std::cerr << "Failed to open " << newfile + "." << std::endl;
		return (1);
	}

	while (std::getline(ifs, line)){
		std::size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos){
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		ofs << line << std::endl;
	}
	return (0);
}
