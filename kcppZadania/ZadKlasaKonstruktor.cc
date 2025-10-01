/*
Zadanie 5.4
--------------------------------------
Stwórz klase (program: ZadKlasaKonstruktor.cc) oraz structure (program: ZadStructKonstruktor.cc) z przykładami konstruktorów i
inicializacją zmiennych:
- domyślny konstruktor,
- domyślny destruktor,
- konstruktor z niepustą liczbą zmiennych argumentów
- inicjalizacja zmiennych:
  - 'standardowa',
*/

#include <iostream>
#include <string>
using namespace std;

class Osoba {
    string imie;
    int wiek;
public:
    Osoba() {
        imie = "Brak";
        wiek = 0;
        cout << "Konstruktor domyslny" << endl;
    }

    Osoba(string i, int w) : imie(i), wiek(w) {
        cout << "Konstruktor z argumentami (lista inicjalizacyjna)" << endl;
    }

    ~Osoba() {
        cout << "Destruktor: " << imie << endl;
    }

    void wypisz() {
        cout << "Imie: " << imie << ", wiek: " << wiek << endl;
    }
};

int main() {
    Osoba o1;
    Osoba o2("Agnieszka", 25);

    o1.wypisz();
    o2.wypisz();

    cout << "\n\nNacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}