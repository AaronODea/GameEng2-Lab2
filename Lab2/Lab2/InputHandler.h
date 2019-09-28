#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Command.h"


class InputHandler
{
public:
	void handleInput();
	//methods to bind commands

	std::string m_word;
	sf::String getString() { return m_word; };
	//void execute() { std::cout << "boiii" << std::endl; };
private:
	Command* buttonBackSpace_;
	Command* buttonTab_;

	Command* buttonQ_;
	Command* buttonW_;
	Command* buttonE_;
	Command* buttonR_;
	Command* buttonT_;
	Command* buttonY_;

};
