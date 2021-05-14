#ifndef DECORATOR_H
#define DECORATOR_H

#include "../Composite/fruit.hpp"

class Decorator : public Fruit
{
protected:
	Fruit *m_fruit;

public:
	Decorator(Fruit *fruit = nullptr);
	~Decorator();

	void afficherFruit(std::string prefix = "");
	virtual void exist() override;
};

#endif
