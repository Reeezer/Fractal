#include "maturingstate.hpp"

#include "../Composite/fruit.hpp"
#include "fermentingstate.hpp"

MaturingState::~MaturingState() {}

void MaturingState::exist()
{
	std::cout << "The " <<  m_fruit->getName() << " is currently maturing, eat it now !" << std::endl;
	FermentingState *fermentingState = new FermentingState();
	fermentingState->setFruit(m_fruit);
	m_fruit->setState(fermentingState);
}

std::string MaturingState::getStateName()
{
	return "Maturing";
}