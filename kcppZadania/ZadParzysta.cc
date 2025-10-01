/*
Zadanie 4.7
--------------------------------------
Napisz program sprawdzający czy liczba jest parzysta/nieparzysta:
- trzy funkcje:
  (a) w jednej sprawdzamy z wykorzystaniem operacji bitowych (&);
  (b) w drugiej inaczej (eg. modulo)
  (c) w trzeciej sprawdzenie z użyciem operatora warunkowego zamiast if (lub jako warunek w if: TRUE || FALSE; (... ? 0 : 1))
  - w kodzie funkcji (a) proszę rozpisać jako komentarz przykładowe sprawdzenie
- nazwać program: ZadParzysta.cc
*/

#include <iostream>

using namespace std;

bool czyParzystaBit(int liczba) {
    // Sprawdzenie parzystości za pomocą operacji bitowej (&)
    // Przykład w komentarzu: 5 & 1 = 1 (nieparzysta), 6 & 1 = 0 (parzysta)
    return (liczba & 1) == 0;
}

bool czyParzystaModulo(int liczba) {
    return (liczba % 2) == 0;
}

bool czyParzystaTernary(int liczba) {
    return (liczba % 2 == 0) ? true : false;
}

int main() {
    int x;

    cout << "Podaj liczbe: ";
    cin >> x;

    cout << x << " jest parzysta (bit): "
        << (czyParzystaBit(x) ? "TAK" : "NIE") << endl;
    cout << x << " jest parzysta (modulo): "
        << (czyParzystaModulo(x) ? "TAK" : "NIE") << endl;
    cout << x << " jest parzysta (ternary): "
        << (czyParzystaTernary(x) ? "TAK" : "NIE") << endl;

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get(); cin.get();

    return 0;
}