#ifndef DECORATOR_H
#define DECORATOR_H

#include "fruit.hpp"

class Decorator : public Fruit
{
protected:
	Fruit *m_fruit;

public:
	Decorator(Fruit *fruit = nullptr);
	~Decorator();

	void afficherFruit(std::string prefix = "");
};

#endif
