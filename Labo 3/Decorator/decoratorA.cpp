#include "decoratorA.hpp"

DecoratorA::DecoratorA(Fruit *fruit)
	: Decorator(fruit)
{
}

DecoratorA::~DecoratorA()
{
}

void DecoratorA::afficherFruit(std::string prefix)
{
	std::cout << prefix << "----------" << std::endl;
	Decorator::afficherFruit(prefix);
	std::cout << prefix << "----------" << std::endl;
}