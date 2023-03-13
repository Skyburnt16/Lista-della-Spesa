//
// Created by Mirko on 02/03/2023.
//
#include "Utente.h"
#include <iostream>

using namespace std;

Utente::Utente(string n) {

    nome = n;

}




string Utente::getnome() const {

    return this->nome;
}




Utente::~Utente() = default;






