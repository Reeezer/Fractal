#include "fermentingstate.hpp"

#include "../Composite/fruit.hpp"
#include "rottingstate.hpp"

FermentingState::~FermentingState() {}

void FermentingState::exist()
{
	std::cout << "The " <<  m_fruit->getName() << " is fermenting, nice some ALCOHOL" << std::endl;
	RottingState *rottingState = new RottingState();
	rottingState->setFruit(m_fruit);
	m_fruit->setState(rottingState);
}

std::string FermentingState::getStateName()
{
	return "Rotting";
}