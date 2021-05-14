#include "rottingstate.hpp"

#include "../Composite/fruit.hpp"

RottingState::~RottingState() {}

void RottingState::exist()
{
	std::cout << "The " <<  m_fruit->getName() << " is currently rotting, BURHK ! It's disgusting" << std::endl;
}

std::string RottingState::getStateName()
{
	return "Rotting";
}