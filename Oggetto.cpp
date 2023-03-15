//
// Created by Mirko on 02/03/2023.
//

#include "Oggetto.h"
#include <algorithm>
#include <utility>

Oggetto::Oggetto() {

    nome = "cibo";
    categoria = "indefinita";
    prezzo = 0;
    acquistato = false;
    quantita = 1;

}

Oggetto::Oggetto(string n,string c,float p, bool a ,int q) {
    nome = std::move(n);
    categoria = std::move(c);
    prezzo = p;
    acquistato = a;
    quantita = q;
}

const string &Oggetto::getNome() const {
    return nome;
}

bool Oggetto::isAcquistato() const {
    return acquistato;
}

int Oggetto::getQuantita() const {
    return quantita;
}

string Oggetto::getCategoria() const {

    string n = reinterpret_cast<const char *>(std::toupper(nome[0]));
    if(std::find(categories.frutta.begin(),categories.frutta.end(),n)!=categories.frutta.end())
        return "frutta";
    else if(std::find(categories.verdura.begin(),categories.verdura.end(),n)!=categories.verdura.end())
        return "verdura";
    else if(std::find(categories.snacks.begin(),categories.snacks.end(),n)!=categories.snacks.end())
        return "snacks";
    else if(std::find(categories.latticini.begin(),categories.latticini.end(),n)!=categories.latticini.end())
        return "latticini";
    else
        return "altro";

}

float Oggetto::getPrezzo() const {
    return prezzo;
}

void Oggetto::setNome(const string &n) {
    Oggetto::nome = n;
}

void Oggetto::setAcquistato(bool a) {
    Oggetto::acquistato = a;
}

void Oggetto::setQuantita(int q) {
    Oggetto::quantita = q;
}

void Oggetto::setCategoria(const string &c) {
    Oggetto::categoria = c;
}

void Oggetto::setPrezzo(float p) {
    Oggetto::prezzo = p;
}

Oggetto::~Oggetto() = default;
