#include "fruit.hpp"

#include "../State/growingstate.hpp"

#include <iostream>

Fruit::Fruit()
    : Fruit("", false)
{
}

Fruit::Fruit(std::string name, bool pepin)
    : Fruit(name, pepin, new Growingstate())
{
}

Fruit::Fruit(std::string name, bool pepin, State *state)
    : m_name(name), m_pepin(pepin)
{
    setState(state);
}

Fruit::~Fruit() {}

std::string Fruit::getName()
{
    return m_name;
}

void Fruit::afficherFruit(std::string prefix)
{
    std::cout << prefix << m_name << " - " << (m_pepin ? "Avec" : "Sans") << " pepin - ";
    printState();
}

bool Fruit::avecOuSansPepin(void)
{
    return m_pepin;
}

void Fruit::setState(State *state)
{
    m_state = state;
    m_state->setFruit(this);
}

void Fruit::printState()
{
    std::cout << m_state->getStateName() << std::endl;
}

void Fruit::exist()
{
    m_state->exist();
}