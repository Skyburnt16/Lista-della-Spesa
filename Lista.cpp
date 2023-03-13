//
// Created by Mirko on 02/03/2023.
//

#include "Lista.h"
#include "Oggetto.h"
#include <iostream>
using namespace std;

Lista::Lista(string n){

    nomeL = n;
};


void Lista::mostra() {

    float totP = 0;
    float totPMark = 0;
    float totPUnmark = 0;
    string unome = this->nomeL;
    for(char i : unome){
        i = toupper(i);
    }

    cout << "====================================" << endl
         << "            " << unome << "            " << endl

         << "====================================" << endl;
    int n = 1;
    for(oggetti.begin();n < oggetti.size(); n++){

        totP += oggetti[n].getPrezzo();
        if(oggetti[n].isAcquistato())
            totPMark += oggetti[n].getPrezzo();
        else
            totPUnmark += oggetti[n].getPrezzo();

        cout << n << ") [" << (oggetti[n].isAcquistato() ? "X" : " ") << "] "
             << oggetti[n].getNome() << " C: "<< oggetti[n].getCategoria() << " Q: " << oggetti[n].getQuantita()<<" P: " << oggetti[n].getPrezzo() << endl;
    }

    cout << "Prezzo Totale Lista = " << totP << " Prezzo oggetti acquistati = " << totPMark << " Prezzo oggetti da acquistare = " << totPUnmark <<endl;
    cout << "=====================================" << endl;
}

string Lista::getNomeLista() const {

    return this->nomeL;
}


void Lista::addOggetto(Oggetto o) {

    int i = 1;
    bool found = false;
    for(oggetti.begin(); i < oggetti.size(); i++){
        if(oggetti[i].getNome() == o.getNome()) {
            oggetti[i].setQuantita(oggetti[i].getQuantita() + 1);
            found = true;
            break;
        }
    }


    if(!found){
        oggetti.push_back(o);
    }

}

void Lista::removeOggetto(int i) {

    oggetti.erase(oggetti.begin() + (i - 1));
}




void Lista::markAcquistato(int i) {

    oggetti[i - 1].setAcquistato(true);

}

void Lista::markNonAcquistato(int i) {

    oggetti[i - 1].setAcquistato(false);

}



Lista::~Lista() = default;


