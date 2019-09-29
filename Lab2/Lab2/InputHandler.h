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
	Command* buttonBackSpace_ = new backspacebutton();
	Command* buttonTab_ = new TAbbutton();

	Command* buttonQ_ = new Qbutton() ;
	Command* buttonW_= new Wbutton();
	Command* buttonE_= new Ebutton() ;
	Command* buttonR_= new Rbutton();
	Command* buttonT_= new Tbutton() ;
	Command* buttonY_= new Tbutton() ;

};
