#include <iostream>

#include "Decorator/decoratorA.hpp"
#include "Decorator/decoratorB.hpp"

#include "Composite/panier.hpp"
#include "Composite/akebia.hpp"
#include "Composite/kiwano.hpp"
#include "Composite/ramboutan.hpp"

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

    // for science (not deallocated however but at least it's short to write)
    Fruit *decoAAABBBA = new DecoratorA(new DecoratorA(new DecoratorA(new DecoratorB(new DecoratorB(new DecoratorB(new DecoratorA(new Kiwano())))))));
    decoAAABBBA->exist();
    decoAAABBBA->exist();
    decoAAABBBA->exist();
    decoAAABBBA->exist();
    decoAAABBBA->exist();

    basketEncorePlusDedans->addFruit(ramboutantantan);

    basketDedans->addFruit(decoB);
    basketDedans->addFruit(ramboutan);
    basketDedans->addFruit(kiwanoLeRetour);

    basketDehors->addFruit(decoA);
    basketDehors->addFruit(akebia);
    basketDehors->addFruit(basketDedans);
    basketDehors->addFruit(decoAAABBBA);

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