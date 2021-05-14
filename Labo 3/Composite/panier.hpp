#ifndef PANIER_H
#define PANIER_H

#include <list>

#include "fruit.hpp"

class Panier : public Fruit
{
private:
    std::list<Fruit *> fruits;

public:
    Panier();
    ~Panier();

    void addFruit(Fruit *);

    void afficherFruit(std::string prefix = "") override;
    bool avecOuSansPepin(void) override;
};

#endif