#include <iostream>
#include <memory>

#include "ZadKcpp.h"
#include "ZadEnumExample.h"
#include "ZadStringExample.h"
#include "ZadArytmetykaWskaznikowZnajdowanie.h"
#include "ZadArytmetykaWskaznikowRoznica.h"
#include "ZadMainExample.h"
#include "ZadUnia.h"
#include "ZadZwracanie.h"
#include "ZadMetodyAbstrakcyjne.h"
#include "ZadStruct.h"
#include "ZadPrzeciazaniePole.h"

using namespace std;

void pokazMenu() {
    cout << "============== MENU ZADAŃ ==============\n";
    cout << " 1. Enum \t - przykład użycia enum na miesiącach\n";
    cout << " 2. String \t - konwersja string <-> liczba\n";
    cout << " 3. Wskaźniki max \t - znajdowanie największego elementu w tablicy\n";
    cout << " 4. Wskaźniki shift \t - przesunięcie tablicy o jedno miejsce w prawo\n";
    cout << " 5. Funkcje \t - przykłady różnych typów funkcji\n";
    cout << " 6. Unia \t - dzielenie pamięci w unii\n";
    cout << " 7. Zwracanie \t - sposoby zwracania wartości\n";
    cout << " 8. Abstrakcja \t - metody abstrakcyjne i figury geometryczne\n";
    cout << " 9. Struktura Student \t - imię oraz średnia studenta w strukturze\n";
    cout << "10. Przeciążanie \t - przeciążanie funkcji do obliczania pól figur\n";
    cout << " 0. Wyjście\n";
    cout << "========================================\n";
    cout << "Wybierz opcję: ";
}

int main() {
    int wybor;
    do {
        pokazMenu();
        cin >> wybor;

        unique_ptr<ZadKcpp> zadanie;

        switch(wybor) {
            case 0: cout << "Koniec programu." << endl; break;
            case 1: zadanie = make_unique<ZadEnumExample>(); break;
            case 2: zadanie = make_unique<ZadStringExample>(); break;
            case 3: zadanie = make_unique<ZadArytmetykaWskaznikowZnajdowanie>(); break;
            case 4: zadanie = make_unique<ZadArytmetykaWskaznikowRoznica>(); break;
            case 5: zadanie = make_unique<ZadMainExample>(); break;
            case 6: zadanie = make_unique<ZadUnia>(); break;
            case 7: zadanie = make_unique<ZadZwracanie>(); break;
            case 8: zadanie = make_unique<ZadMetodyAbstrakcyjne>(); break;
            case 9: zadanie = make_unique<ZadStruct>(); break;
            case 10: zadanie = make_unique<ZadPrzeciazaniePole>(); break;
            default: cout << "Niepoprawny wybor!" << endl; break;
        }

        if(zadanie) {
            cout << "\n--- Wynik zadania ---\n";
            zadanie->wykonaj();
            cout << "----------------------\n\n";
        }

    } while(wybor != 0);

    return 0;
}
