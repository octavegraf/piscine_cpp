#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	public:
	Harl();
	~Harl();
	int complain(char *level);
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	private:
	std::pair<std::string, void (Harl::*)(void)> actions[4];
};

#endif