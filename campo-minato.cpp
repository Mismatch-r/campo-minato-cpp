#include <iostream>

int main() {
    int mappa[20][20] = {0};
    
     mappa[15][17] = 1;     

    int riga, colonna;
    int tentativi_rimanenti = 15;
    bool trovato = false;

    std::cout << "--- Benvenuto nel Campo Minato! ---" << std::endl;
    std::cout << "Hai 15 tentativi per evitare la mina." << std::endl;

    while (tentativi_rimanenti > 0 && !trovato) {
        std::cout << "\nTentativi rimanenti: " << tentativi_rimanenti << std::endl;
        std::cout << "Inserisci riga e colonna (0-20): ";
        std::cin >> riga >> colonna;
        
        if (riga < 0 || riga > 20 || colonna < 0 || colonna > 20) {
            std::cout << "Coordinate non valide! Riprova." << std::endl;

        }

        if (mappa[riga][colonna] == 1) {
            std::cout << "BOOM! Hai calpestato una mina! Hai perso." << std::endl;
            trovato = true;
        } else {
            std::cout << "Salvo! Qui c'è solo erba." << std::endl;
            tentativi_rimanenti--;
        }
    }

    if (!trovato) {
        std::cout << "\nComplimenti! Hai superato i 15 tentativi senza esplodere. Hai vinto!" << std::endl;
    }

    return 0;
}