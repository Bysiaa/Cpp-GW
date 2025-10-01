/*
Zadanie 5.2
--------------------------------------
Stwórz plik z działająca strukturą:
- deklaracja,
- definicja obiektów (w dowolny sposób):
  - wywołanie,
  - zmiana wartości,
  - odczyt wartości,
- nazwij program: ZadStruct.cc
*/

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string imie;
    int wiek;
    double srednia;

    Student(string i = "Brak", int w = 0, double s = 0.0)
        : imie(i), wiek(w), srednia(s) {
    }
};

int main() {
    Student u1;
    Student u2("Jan", 16, 4.5);

    u1.imie = "Ala";
    u1.wiek = 17;
    u1.srednia = 3.2;

    cout << "Uczeń 1: " << u1.imie << ", wiek " << u1.wiek
        << ", srednia " << u1.srednia << endl;
    cout << "Uczeń 2: " << u2.imie << ", wiek " << u2.wiek
        << ", srednia " << u2.srednia << endl;

    u2.srednia = 4.8;
    cout << "Po zmianie: " << u2.imie << " ma srednia " << u2.srednia << endl;

    cout << "\n\nNacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
