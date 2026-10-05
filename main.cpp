#include "voiture.h"

int main() {
    CVoiture maVoiture("Peugeot", "208", 100, "Essence");

    maVoiture.affiche();
    maVoiture.demarrer();
    maVoiture.accelerer(50);
    maVoiture.affiche();
    maVoiture.ralentir(20);
    maVoiture.affiche();
    maVoiture.arreter();
    maVoiture.affiche();

    return 0;
}
