#ifndef DECORATORA_H
#define DECORATORA_H

#include "decorator.hpp"

class DecoratorA : public Decorator
{
protected:
public:
	DecoratorA(Fruit *fruit = nullptr);
	~DecoratorA();

	void afficherFruit(std::string prefix = "");
};

#endif
