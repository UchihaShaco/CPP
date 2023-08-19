#include "Harl.hpp"
// empty constructor and destructor because we don't need to do anything in the
Harl::Harl(void) {}
Harl::~Harl(void) {}
void Harl::debug(void) {	
	std::cout << "I love having extra bacon for my 7X-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level) {
	std::string levels[4] = {"debug", "info", "warning", "error"};
	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;
	while (i < 4) {
		if (levels[i] == level) {
			(this->*functions[i])();
			return ;
		}
		i++;
	}
	std::cout << "Invalid input" << std::endl;
}
