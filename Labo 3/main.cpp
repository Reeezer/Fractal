#include <iostream>

#include "decoratorA.hpp"
#include "decoratorB.hpp"

#include "panier.hpp"
#include "akebia.hpp"
#include "kiwano.hpp"
#include "ramboutan.hpp"

int main(void)
{
    // Création des paniers garnis
    Panier *basketDehors = new Panier();
    Fruit *kiwano = new Kiwano();
    Fruit *akebia = new Akebia();

    Panier *basketDedans = new Panier();
    Fruit *ramboutan = new Ramboutan();
    Fruit *kiwanoLeRetour = new Kiwano();

    Panier *basketEncorePlusDedans = new Panier();
    Fruit *ramboutantantan = new Ramboutan();

    Fruit *decoA = new DecoratorA(kiwano);
    Fruit *decoB = new DecoratorB(basketEncorePlusDedans);
    Fruit *decoBB = new DecoratorB(decoB);

    basketEncorePlusDedans->addFruit(ramboutantantan);

    basketDedans->addFruit(decoBB);
    basketDedans->addFruit(ramboutan);
    basketDedans->addFruit(kiwanoLeRetour);

    basketDehors->addFruit(decoA);
    basketDehors->addFruit(akebia);
    basketDehors->addFruit(basketDedans);

    // Afficher le panier
    basketDehors->afficherFruit();

    // poutzer le chenis en bas l'galetas, et ensuite le beutscher
    // aka : nettoyer la mémoire

    delete ramboutantantan;
    delete basketEncorePlusDedans;

    delete kiwanoLeRetour;
    delete ramboutan;
    delete basketDedans;

    delete akebia;
    delete kiwano;
    delete basketDehors;

    return 0;
}