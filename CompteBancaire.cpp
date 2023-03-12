#include "CompteBancaire.h"
#include <iostream>
#include <string>
using namespace std;

CompteBancaire::CompteBancaire(string name, int money){
    nom = name;
    solde = money;
}
CompteBancaire::CompteBancaire():nom("Dupont"), solde(1000){}

CompteBancaire::~CompteBancaire(){
}

void CompteBancaire::depot(int somme){
    solde += somme;
    cout << " Votre depot de " << somme << " est reussi !" << endl;
}

void CompteBancaire::retrait(int somme){
    if (solde < somme){
        cout << " Votre retrait de " << somme <<" a echoue !! "<< endl;
        cout << " votre solde est inferieur a " << somme << endl;
    } else{
        solde -= somme;
    cout << " Votre retrait de " << somme << " est reussi !" << endl;
    }
}

 void CompteBancaire::affiche() const{
    cout << " Nouveau solde de " << nom << " : " << solde << endl;
}
