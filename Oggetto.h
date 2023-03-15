//
// Created by Mirko on 02/03/2023.
//

#ifndef LISTADELLASPESA_OGGETTO_H
#define LISTADELLASPESA_OGGETTO_H



#include "Categorie.h"


using namespace std;

class Oggetto {

private:
    Categorie categories;
    string nome;
    bool acquistato;
    int quantita;
    string categoria;
    float prezzo;

public:

    Oggetto();

    Oggetto(string n,string c,float p, bool a = false,int q = 1);

    const string &getNome() const;

    bool isAcquistato() const;

    int getQuantita() const;

    string getCategoria() const;

    float getPrezzo() const;

    void setNome(const string &nome);

    void setAcquistato(bool acquistato);

    virtual ~Oggetto();

    void setQuantita(int quantita);

    void setCategoria(const string &categoria);

    void setPrezzo(float prezzo);





};


#endif //LISTADELLASPESA_OGGETTO_H
