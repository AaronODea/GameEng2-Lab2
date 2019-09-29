#pragma once
#include <iostream>
#include <list>


class Command
{
public:

	std::string m_word = { "" };
	std::string m_lastLetter = { "" };


	//to add a new letter take the letter append it to the current string

	//to remove simple pop_back the current string but before
	//doing this append the last letter of the current string to m_lastletter
	//this is so we can redo it after

	//to redo simply get the last letter in the m_lastletter string and append it to the current string

	//recomend caping how long last letter can be before erasing the front. and also error checking for
	//when there is no letters in the current string 


	virtual ~Command() {}

	virtual void execute() = 0;

	void add() { };
	void remove() { };
	void redo() {};

	std::string getString() { return m_word; };

protected:
};


class backspacebutton : public Command
{
}
class TAbbutton : public Command
{
}
class Qbutton : public Command
{
}
class Wbutton : public Command
{
}

class Ebutton : public Command
{
}

class Rbutton : public Command
{
}

class Tbutton : public Command
{
}

class Ybutton : public Command
{
}


//
//
//
//class MacroCommand : public Command
//{
//public:
//	MacroCommand();
//	virtual ~MacroCommand();
//
//	void add();
//	void remove();
//	void redo();
//
//	void execute(Command*);
//
//	std::list<Command*>* commands;
//private:
//
//};
//
