#include "panier.hpp"

Panier::Panier()
    : Fruit()
{
}

Panier::~Panier()
{
}

void Panier::addFruit(Fruit *fruit)
{
    fruits.push_back(fruit);
}

void Panier::afficherFruit(std::string prefix)
{
    std::cout << prefix << "Panier : " << m_name << " {" << std::endl;
    for (Fruit *fruit : fruits)
    {
        fruit->afficherFruit(prefix + "\t");
    }
    std::cout << prefix << "} - " << (avecOuSansPepin() ? "Avec" : "Sans") << " pepins" << std::endl;
}

// Retourne true si l'un des fruits ou panier contenu a des pépins
bool Panier::avecOuSansPepin(void)
{
    bool hasDesPepins = false;
    for (Fruit *fruit : fruits)
    {
        if (fruit->avecOuSansPepin())
            hasDesPepins = true;
    }
    return hasDesPepins;
}