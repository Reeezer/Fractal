#ifndef FRUIT_H
#define FRUIT_H

#include <string>
#include <iostream>

#include "../State/state.hpp"

class Fruit
{
protected:
	std::string m_name;
	bool m_pepin;

	State *m_state = nullptr;

public:
	Fruit();
	Fruit(std::string name, bool pepin);
	Fruit(std::string name, bool pepin, State *state);
	~Fruit();

	virtual void afficherFruit(std::string prefix = "");
	virtual bool avecOuSansPepin(void);
	std::string getName();

	void setState(State *state);
	virtual void printState();
	virtual void exist();
};

#endif
