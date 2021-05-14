#ifndef STATE_H
#define STATE_H

class Fruit;
#include <iostream>

class State
{
protected:
	Fruit *m_fruit = nullptr;

public:
	virtual ~State() {}

	void setFruit(Fruit *);

	// the fruit exists and depending on the state it tells what stage of life it is currently in
	virtual void exist() = 0;
	virtual std::string getStateName() = 0;
};

#endif