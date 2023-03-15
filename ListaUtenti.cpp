//
// Created by Mirko on 02/03/2023.
//
#include "ListaUtenti.h"
#include <list>
#include <iostream>
using namespace std;

void ListaUtenti::mostraUtenti() {

    cout << "====================================\n";
    if(!utenti.empty()) {
        int n = 1;
        list<Utente>::iterator it;
        for (it = utenti.begin(); it != utenti.end(); it++) {
            cout << n << ") " << it->getnome() << endl;
            n++;
        }
    }
    else
        cout << "Non esistono ancora utenti, creane uno! " << endl;
    cout << " ====================================\n";
}


void ListaUtenti::addU(Utente u) {
    list<Utente>:: iterator it;
    bool found = false;
    if(!utenti.empty()) {
        for (it = utenti.begin(); it != utenti.end(); it++) {
            if (it->getnome() == u.getnome())
                found = true;
            break;
        }
    }
    if(!found){

        utenti.push_back(u);
    }
    else{
        cout << "Utente gia' esistente" << endl;
    }
}

void ListaUtenti::removeU(int i) {

    list<Utente>::iterator it;
    int n = 0;
    i-=1;
    if(!utenti.empty()) {
        for (it = utenti.begin(); it != utenti.end(); it++) {
            if (n == i) {

                cout << "Utente " << it->getnome() << " eliminato" << endl;
                utenti.erase(it);
                break;
            }
        }
        cout << "Hai inserito una posizione non corretta, riprova tornando al menu principale!"<< endl;
    }
    else
        cout << "Non esiste ancora nessun utente";
}

void ListaUtenti::addL(Lista l, Utente u) {


    std::map<Lista,Utente>::iterator itr = liste.begin();
    bool found = false;
    if(!liste.empty()) {
        while (itr != liste.end()) {
            if (itr->first.getNomeLista().compare(l.getNomeLista()) && itr->second.getnome().compare(u.getnome())) {
                found = true;
                break;
            }

            itr++;
        }
        if(!found){

            liste.insert(make_pair(l, u));
        }
        else
            cout << "Questa lista esiste gia' per l'utente : "<< u.getnome();

    }
    else{

        liste.insert(make_pair(l, u));
    }

}

void ListaUtenti::removeL(const Lista& l, Utente u) {

    std::map<Lista,Utente>::iterator itr = liste.begin();
    bool found = false;
    if(!liste.empty()) {
        while (itr != liste.end()) {
            if (l.getNomeLista() == itr->first.getNomeLista() && u.getnome() == itr->second.getnome()) {
                liste.erase(itr);
                found = true;
                break;
            }
            itr++;
        }
        if(!found)
            cout << "Eliminato lista : " << l.getNomeLista() << " da utente : " << u.getnome();
        else
            cout << "La lista che vuoi rimuovere non e' associata a questo utente";
    }
    else{
        cout << "Non ci sono liste assegnate per nessun utente";
    }
}

void ListaUtenti::mostraLperU(Utente u) {

    std::map<Lista,Utente>::iterator itr = liste.begin();
    int n = 0;
    cout << "========================================" << endl;
    while(itr != liste.end()){

        if(itr -> second.getnome() == u.getnome()){
            cout << n << ") " << itr->first.getNomeLista()<<endl;
            n++;
        }
        itr++;
    }
    cout << "=======================================" << endl;

}

Utente ListaUtenti::getUtentefromlistpos(int pos) const {
    pos -=1;
    int n = 0;
    _List_const_iterator<Utente> it = utenti.begin();
    for(it = utenti.begin();it != utenti.end(); it++){
        if(pos == n)
            return *it;
        n++;
    }
}

Lista ListaUtenti::getListafrommostraLperU(int pos,Utente u) const {
    int n = 1;

    _Rb_tree_const_iterator<pair<const Lista, Utente>> itr = liste.begin();
    while(itr != liste.end()){
        if(itr -> second.getnome() == u.getnome()) {
            if (n == pos) {

                return itr->first;
            }
        }
    }
}

bool ListaUtenti::utentivuoti() {
    if(!utenti.empty())
        return false;
    else
        return true;
}

int ListaUtenti::contaListePerU(Utente u) { //ritorna il numero delle liste per un utente
    int nl = 0;
    std::map<Lista,Utente>::iterator itr = liste.begin();
    while(itr != liste.end()) {
        if (itr->second.getnome() == u.getnome())
            nl++;
    }
    return nl;
}

int ListaUtenti::contaUtenti() {
    int nu = 0;
    _List_const_iterator<Utente> it = utenti.begin();
    if(!utenti.empty()) {
        nu = 1;
        for (it = utenti.begin(); it != utenti.end(); it++) {
            nu++;
        }
    }
    return nu;
}

bool ListaUtenti::Listediuvuote(Utente u) {
    bool vuota = true;
    std::map<Lista,Utente>::iterator itr = liste.begin();
    while(itr != liste.end()){
        if(itr -> second.getnome() == u.getnome())
            vuota = false;
    }

    return vuota;
}





