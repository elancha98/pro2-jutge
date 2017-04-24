//
// Created by ernesto on 24/04/17.
//

#include "LlistaIOEstudiant.hh"

void LlegirLlistaEstudiant(list<Estudiant>& l) {
    int dni;
    double nota;
    while (cin >> dni >> nota and dni != 0 and nota != 0) {
        Estudiant e(dni);
        e.afegir_nota(nota);
        l.push_back(e);
    }
}

void EscriureLlistaEstudiant(list<Estudiant>& l) {
    list<Estudiant>::iterator it;
    for (it = l.begin(); it != l.end(); it++) {
        (*it).escriure();
    }
}