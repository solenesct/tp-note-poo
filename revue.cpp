#include "revue.h"
#include <iostream>

revue::revue(std::string t, int a, int n) 
    : document(t, a), numero(n), estEmprunte(false) {}

void revue::afficherInfos() const {
    std::cout << "Revue : " << titre << " n" << numero << " (" << annee << ")" << std::endl;
}

void revue::emprunter() { estEmprunte = true; }
void revue::restituer() { estEmprunte = false; }