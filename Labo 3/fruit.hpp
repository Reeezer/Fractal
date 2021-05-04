#ifndef FRUIT_H
#define FRUIT_H

#include <string>
#include <iostream>

class Fruit
{
protected:
    std::string m_name;
    bool m_pepin;

public:
    Fruit();
    Fruit(std::string name, bool pepin);
    ~Fruit();

    virtual void afficherFruit(std::string prefix = "");
    virtual bool avecOuSansPepin(void);
};

#endif
