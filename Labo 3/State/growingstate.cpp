#include "growingstate.hpp"

#include "../Composite/fruit.hpp"
#include "maturingstate.hpp"

Growingstate::~Growingstate() {}

void Growingstate::exist()
{
	std::cout << "The " <<  m_fruit->getName() << " is growing, WAIT A MINUTE" << std::endl;
	MaturingState *maturingState = new MaturingState();
	maturingState->setFruit(m_fruit);
	m_fruit->setState(maturingState);
}

std::string Growingstate::getStateName()
{
	return "Growing";
}