//
// Created by ernesto on 24/04/17.
//

#include <iostream>
#include <list>
#include "LlistaIOEstudiant.hh"

using namespace std;

int main() {
    list<Estudiant> l;
    LlegirLlistaEstudiant(l);
    int dni, count = 0;
    cin >> dni;
    list<Estudiant>::iterator it;
    for (it = l.begin(); it != l.end(); it++) {
        if ((*it).consultar_DNI() == dni)
            count++;
    }
    cout << dni << " " << count << endl;
}