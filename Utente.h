//
// Created by Mirko on 02/03/2023.
//

#ifndef LISTADELLASPESA_UTENTE_H
#define LISTADELLASPESA_UTENTE_H



#include "Lista.h"
#include <map>
using namespace std;

class Utente {

private:


    string nome;



public:

    explicit Utente(string nome);

    string getnome() const;

    virtual ~Utente();

    bool operator<(const Utente &altrou){
        return nome < altrou.nome;
    }

};



#endif //LISTADELLASPESA_UTENTE_H
