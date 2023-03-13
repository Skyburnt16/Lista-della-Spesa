//
// Created by Mirko on 02/03/2023.
//

#ifndef LISTADELLASPESA_LISTA_H
#define LISTADELLASPESA_LISTA_H



#include "Oggetto.h"

using namespace std;

class Lista {

private:

    string nomeL;
    vector<Oggetto> oggetti;

public:

    explicit Lista(string n);

    string getNomeLista() const;

    void mostra();

    void addOggetto(Oggetto o);

    void removeOggetto(int i);

    void markAcquistato(int i);

    virtual ~Lista();



    void markNonAcquistato(int i);

    bool operator<(const Lista  &altral)const{
        return nomeL < altral.nomeL;
    }


};



#endif //LISTADELLASPESA_LISTA_H
