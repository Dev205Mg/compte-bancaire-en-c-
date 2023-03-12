#include "CompteBancaire.cpp"
#include <iostream>
#include <string>

int main(){
    CompteBancaire fantome, compte1("Nirina", 2000);
    compte1.depot(1500);
    compte1.retrait(3000);
    compte1.affiche();
    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    fantome.retrait(1500);
    fantome.affiche();
    return 0;
}
