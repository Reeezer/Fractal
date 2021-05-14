#ifndef DECORATORB_H
#define DECORATORB_H

#include "decorator.hpp"

class DecoratorB : public Decorator
{
protected:
public:
	DecoratorB(Fruit *fruit = nullptr);
	~DecoratorB();

	void afficherFruit(std::string prefix = "");
};

#endif
