#ifndef VOITURE_H
#define VOITURE_H

#include <string>

class CVoiture {
private:
    std::string marque;
    std::string modele;
    int puissance;
    std::string carburant;
    int vitesse;

public:
    CVoiture(std::string m, std::string mod, int p, std::string c);
    void demarrer();
    void accelerer(int valeur);
    void ralentir(int valeur);
    void arreter();
    void affiche();
};

#endif
