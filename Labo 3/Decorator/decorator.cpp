#include "decorator.hpp"

Decorator::Decorator(Fruit *fruit)
	: m_fruit(fruit)
{
}

Decorator::~Decorator()
{
}

void Decorator::afficherFruit(std::string prefix)
{
	m_fruit->afficherFruit(prefix);
}

void Decorator::exist()
{
	m_fruit->exist();
}