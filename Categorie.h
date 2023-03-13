//
// Created by Mirko on 02/03/2023.
//

#ifndef LISTADELLASPESA_CATEGORIE_H
#define LISTADELLASPESA_CATEGORIE_H

#include <vector>
#include <string>

using namespace std;

class Categorie {

public:

    // Vettore di nomi di frutta
    vector<string> frutta = {"Mela", "Banana", "Arancia", "Pesca", "Pera", "Kiwi", "Fragola",
                             "Limone", "Melone", "Ananas", "Mango", "Ciliegia", "Pompelmo",
                             "Mandarino", "Uva", "Cocco", "Litchi", "Mirtillo", "Lime",
                             "Ribes", "Papaya", "Melograno", "Fico", "Prugna", "Clementina",
                             "Mandorla", "Noce", "Nespola", "Susina", "Pitaya"};

    //Vettore di snack
    vector<string> snacks = {
            "Patatine",
            "Popcorn",
            "Cioccolato",
            "Gommose",
            "Caramelle",
            "Biscotti",
            "Cracker",
            "Chips",
            "Noci",
            "Mandorle",
            "Nocciole",
            "Pistacchi",
            "Gallette di riso",
            "Fette biscottate",
            "Snack di mais",
            "Pretzel",
            "Pannocchie",
            "Churros",
            "Tostadas",
            "Taralli",
            "Pizzette",
            "Bretzel",
            "Focaccine",
            "Patatine al formaggio",
            "Chips di mais",
            "Stick di mais",
            "Patatine al bacon",
            "Patatine al sale",
            "Patatine al pepe",
            "Patatine al limone",
            "Patatine al pomodoro"
    };

    //Vettore di verdure
    vector<string> verdura = {
            "Asparagi",
            "Broccoli",
            "Carote",
            "Cavolfiore",
            "Cetrioli",
            "Cipolle",
            "Fagioli",
            "Fagiolini",
            "Funghi",
            "Lattuga",
            "Melanzane",
            "Peperoni",
            "Piselli",
            "Pomodori",
            "Radicchio",
            "Ravanelli",
            "Spinaci",
            "Zucchine",
            "Barbabietole",
            "Patate",
            "Rape",
            "Topinambur",
            "Cavolo",
            "Verza",
            "Cavolo cappuccio",
            "Cavolo nero",
            "Cavolo romano",
            "Zucca",
            "Cocomero",
            "Anguria"
    };

    //Vettore di latticini
    vector<string> latticini = {"Latte", "Formaggio", "Yogurt", "Burro", "Mozzarella",
                                "Panna", "Ricotta", "Parmigiano", "Provolone", "Gorgonzola",
                                "Brie", "Camembert", "Feta", "Mascarpone", "Taleggio",
                                "Fontina", "Gouda", "Cheddar", "Emmental", "Roquefort",
                                "Gruyere", "Burrata", "Stracchino", "Ricotta salata", "Asiago",
                                "Caciocavallo", "Caciotta", "Chevre", "Galette", "Gjetost"};


};

#endif //LISTADELLASPESA_CATEGORIE_H
