#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	public:
	Harl();
	~Harl();
	void complain(std::string level);
	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	static std::pair<std::string, void (Harl::*)(void)> actions[] = 
	{
		std::pair<std::string, void (Harl::*)(void)>("DEBUG", &Harl::debug),
		std::pair<std::string, void (Harl::*)(void)>("INFO", &Harl::info),
		std::pair<std::string, void (Harl::*)(void)>("WARNING", &Harl::warning),
		std::pair<std::string, void (Harl::*)(void)>("ERROR", &Harl::error)
	};
};

#endif