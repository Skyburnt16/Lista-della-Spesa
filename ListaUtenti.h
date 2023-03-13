//
// Created by Mirko on 02/03/2023.
//

#ifndef LISTADELLASPESA_LISTAUTENTI_H
#define LISTADELLASPESA_LISTAUTENTI_H

#include "Utente.h"
#include <list>
using namespace std;

class ListaUtenti{

private:

    list<Utente> utenti;
    map<Lista,Utente> liste;

public:

    void mostraUtenti();

    void addU(Utente u);

    void removeU(int i);

    void removeL(const Lista& l, Utente u);

    void addL(Lista l, Utente u);

    void mostraLperU(Utente u);

    bool utentivuoti();

    int contaListePerU(Utente u);

    int contaUtenti();

    Utente getUtentefromlistpos(int pos) const; //ritorna l'utente nella posizione pos dalla lista degli utenti

    Lista getListafrommostraLperU(int pos,Utente u) const; //ritorna la lista nella posizione pos nella lista delle liste di un utente

    //quest'ultima funziona serve per accedere alle liste e modificarle ( aggiungendo o togliendo oggetti ecc.)

};



#endif //LISTADELLASPESA_LISTAUTENTI_H
