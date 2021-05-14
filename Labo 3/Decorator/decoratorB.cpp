#include "decoratorB.hpp"

DecoratorB::DecoratorB(Fruit *fruit)
	: Decorator(fruit)
{
}

DecoratorB::~DecoratorB()
{
}

void DecoratorB::afficherFruit(std::string prefix)
{
	std::cout << prefix << "++++++++++" << std::endl;
	Decorator::afficherFruit(prefix);
	std::cout << prefix << "++++++++++" << std::endl;
}