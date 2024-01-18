#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void setname(std::string name);
		void announce(void);
};

#endif
