#ifndef COMPTEBANCAIRE_H_INCLUDED
#define COMPTEBANCAIRE_H_INCLUDED
#include <string>
using namespace std;

class CompteBancaire {
    private:
        string nom;
        int solde;
    public:
        CompteBancaire();
        CompteBancaire(string name, int money);
        ~CompteBancaire();
        void depot(int somme);
        void retrait(int somme);
        void affiche() const;

};


#endif // COMPTEBANCAIRE_H_INCLUDED
