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


void Lista::mostraOgg() { //mostra gli oggetti di una lista

    float totP = 0;
    float totPMark = 0;
    float totPUnmark = 0;
    string unome = this->nomeL;
    cout << "====================================" << endl;
    if(!oggetti.empty()) {
        for (char i: unome) {
            i = toupper(i);
        }


            cout << "            " << unome << "            " << endl;

             cout << "====================================" << endl;
        int n = 1;
        for (oggetti.begin(); n < oggetti.size(); n++) {

            totP += oggetti[n].getPrezzo();
            if (oggetti[n].isAcquistato())
                totPMark += oggetti[n].getPrezzo();
            else
                totPUnmark += oggetti[n].getPrezzo();

            cout << n << ") [" << (oggetti[n].isAcquistato() ? "X" : " ") << "] "
                 << oggetti[n].getNome() << " C: " << oggetti[n].getCategoria() << " Q: " << oggetti[n].getQuantita()
                 << " P: " << oggetti[n].getPrezzo() << endl;
        }

        cout << "Prezzo Totale Lista = " << totP << " Prezzo oggetti acquistati = " << totPMark
             << " Prezzo oggetti da acquistare = " << totPUnmark << endl;
        cout << "=====================================" << endl;
    }
    else{
        cout << "Non esistono ancora oggetti per questa lista, aggiungine uno!" << endl;
        cout << "=====================================" << endl;
    }
}

string Lista::getNomeLista() const { //prende il nome di una lista

    return this->nomeL;
}


void Lista::addOggetto(Oggetto o) { //aggiunge un oggetto e ne modifica la quantita se l'oggetto aggiunto esiste gia' nella lista

    int i = 1;
    bool found = false;
    if(!oggetti.empty()) {
        for (oggetti.begin(); i < oggetti.size(); i++) {
            if (oggetti[i].getNome() == o.getNome()) {
                oggetti[i].setQuantita(oggetti[i].getQuantita() + 1);
                found = true;
                break;
            }
        }


        if (!found) {
            oggetti.push_back(o);
        }
    }
    else{
        oggetti.push_back(o);
    }

}

void Lista::removeOggetto(int i) { //rimuove un oggetto

    oggetti.erase(oggetti.begin() + (i - 1));
}




void Lista::markAcquistato(int i) { //setta acquistato un oggetto

    oggetti[i - 1].setAcquistato(true);

}

void Lista::markNonAcquistato(int i) { //setta non acquistato un oggetto

    oggetti[i - 1].setAcquistato(false);

}

int Lista::contaOggperL() { //restituisce il numero di oggetti in una lista

    return oggetti.size();

}


Lista::~Lista() = default;


