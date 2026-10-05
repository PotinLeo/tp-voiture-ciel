#include <iostream>
#include "voiture.h"

using namespace std;

CVoiture::CVoiture(string m, string mod, int p, string c) 
    : marque(m), modele(mod), puissance(p), carburant(c), vitesse(0) {}

void CVoiture::demarrer() {
    cout << "La voiture demarre." << endl;
}

void CVoiture::accelerer(int valeur) {
    vitesse += valeur;
    cout << "Acceleration de " << valeur << " km/h." << endl;
}

void CVoiture::ralentir(int valeur) {
    vitesse -= valeur;
    if (vitesse < 0) vitesse = 0;
    cout << "Ralentissement de " << valeur << " km/h." << endl;
}

void CVoiture::arreter() {
    vitesse = 0;
    cout << "La voiture est arretee." << endl;
}

void CVoiture::affiche() {
    cout << "--- " << marque << " " << modele << " (" << puissance << " ch, " << carburant << ") | Vitesse : " << vitesse << " km/h ---" << endl;
}
