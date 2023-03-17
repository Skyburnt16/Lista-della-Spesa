#include <iostream>
#include "ListaUtenti.h"

//TODO finisci di scrivere il menu con le sotto opzioni relative all'aggiunta di liste e oggetti
//TODO definisci observer che notifica durante la modifica del set di acquired per ogni oggetto
int main() {
    ListaUtenti l;
    int sp, ss, st, so,sc; //scelte per gli switch : SS,SO,SC mi servono per controllare le scelte delle posizioni mentre SP e ST le scelte per gli switch
    bool secondomenu,terzomenu;

    string newu;
    while(true){
        cout << "========= MENU PRINCIPALE ===============" <<endl;
        cout <<"1. Mostra tutti gli Utenti" << endl;
        cout <<"2. Aggiungi un utente " << endl;
        cout <<"3. Rimuovi un utente" <<endl;
        cout <<"4. Esci " <<endl;
        cout << " ========================================"<<endl;
        cin >> sp;
        switch(sp){
            case 1 : {

                l.mostraUtenti();
                if(l.utentivuoti()){

                    break;
                }

                else {

                    cout << "Seleziona un utente per mostrarne le liste associate :" << endl;
                    cin >> ss;
                    if (ss > l.contaUtenti()) {

                        cout << "Scelta non valida" << endl;
                        break;
                    } else {
                        if (l.contaListePerU(l.getUtentefromlistpos(ss)) ==
                            0) { //controlla se esistono liste per l'utente selezionato

                            cout << "=========================" << endl;
                            cout << " Non esistono ancora liste per questo utente, aggiungine una!" << endl;
                            cout << "=========================" << endl;

                        }
                        l.mostraLperU(l.getUtentefromlistpos(ss)); //mostra le liste per l'utente selezionato
                        secondomenu = true;
                        while (secondomenu) {

                            cout << "=========== " << l.getUtentefromlistpos(ss).getnome() << "========" << endl;
                            cout << "1. Aggiungi una lista " << endl;
                            cout << "2. Rimuovi una lista " << endl;
                            cout << "3. Mostra gli oggetti di una lista" << endl;
                            cout << "4. Torna al menu principale" << endl;
                            cin >> st;

                            switch (st) {
                                case 1: {

                                    cout << "Inserisci il nome della lista :" << endl;
                                    string nl;
                                    cin >> nl;
                                    Lista lis(nl);
                                    l.addL(lis, l.getUtentefromlistpos(ss));
                                    break;
                                }
                                case 2: {
                                    //TODO definisci caso per rimozione di una lista
                                }
                                case 3: {
                                    //TODO ispirati al menu principale ma in funzione degli oggetti e crea un altro sottomenu per
                                    //TODO aggiunta oggetti, rimozione oggetti, set di acquired o non acquired
                                    cout << "==========================================" << endl;

                                    l.mostraLperU(l.getUtentefromlistpos(ss));

                                    if(l.Listediuvuote(l.getUtentefromlistpos(ss))){
                                        cout << "Non esistono ancora liste creane una!" << endl;
                                        break;
                                    }

                                    cout << "Seleziona una lista per mostrarne gli oggetti :" << endl;
                                    cin >> so;
                                    if (so > l.contaListePerU(l.getUtentefromlistpos(ss))) {
                                        cout << "Scelta non valida" << endl;
                                        break;

                                    } else {

                                        if (l.getListafrommostraLperU(so, l.getUtentefromlistpos(ss)).contaOggperL() ==
                                            0) { // controlla se ci sono oggetti nella lista selezionata

                                            cout << "=========================" << endl;
                                            cout << " Non esistono ancora oggetti per questa lista, aggiungine uno!"
                                                 << endl;
                                            cout << "=========================" << endl;
                                        }
                                        terzomenu = true;
                                        while(terzomenu) {

                                            l.getListafrommostraLperU(so, l.getUtentefromlistpos(ss)).mostraOgg();

                                            cout << "======== " << l.getListafrommostraLperU(so, l.getUtentefromlistpos(
                                                    ss)).getNomeLista() << "==========" << endl;
                                            cout << "1. Aggiungi un oggetto" << endl;
                                            cout << "2. Rimuovi un oggetto" << endl;
                                            cout << "3. Setta un oggetto acquistato" << endl;
                                            cout << "4. Setta un oggetto non acquistato" << endl;
                                            cout << "5. Torna alla selezione delle liste" << endl;
                                            cin >> sc;

                                            switch(sc){
                                                case 1:{

                                                }
                                                case 2:{

                                                }
                                                case 3:{

                                                }
                                                case 4:{

                                                }
                                                case 5:{

                                                    cout << "ciao" <<endl;
                                                    terzomenu = false;
                                                    break;
                                                }
                                                default :{
                                                    cout << " Scelta non valida" << endl;
                                                    break;
                                                }
                                            }
                                        }
                                    }

                                }
                                case 4 :{

                                    secondomenu = false;
                                    break;

                                }
                                default: {
                                    cout << "Scelta non valida" << endl;

                                    break;
                                }
                            }
                        }
                    }
                }
                break;

            }
            case 2 : {

                cout << "Inserisci nome nuovo Utente : " << endl;
                cin >> newu;
                Utente u(newu);
                l.addU(u);
                break;

            }

            case 3 :{
                if(l.utentivuoti()){
                    cout << "Non esistono utenti, creane uno per rimuoverlo!" <<endl;
                    break;
                }
                else {
                    l.mostraUtenti();
                    cout << " Digita il numero dell'utente che vuoi rimuovere" <<endl;
                    int rimu;
                    cin >> rimu;
                    l.removeU(rimu);\
                    break;
                }

            }

            case 4 : {

                return 0;
            }
            default : {

                cout << "Scelta non valida" <<endl;
                break;
            }
        }
    }

}
