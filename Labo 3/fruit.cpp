#include "fruit.hpp"

Fruit::Fruit()
    : m_name(""), m_pepin(false)
{
}

Fruit::Fruit(std::string name, bool pepin)
    : m_name(name), m_pepin(pepin)
{
}

Fruit::~Fruit() {}

void Fruit::afficherFruit(std::string prefix)
{
    std::cout << prefix << m_name << " - " << (m_pepin ? "Avec" : "Sans") << " pepin" << std::endl;
}

bool Fruit::avecOuSansPepin(void)
{
    return m_pepin;
}