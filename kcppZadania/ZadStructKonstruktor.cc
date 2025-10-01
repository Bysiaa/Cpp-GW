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

struct Student {
    string imie;
    int wiek;

    Student() {
        imie = "Anonim";
        wiek = 0;
        cout << "Konstruktor domyslny" << endl;
    }

    Student(string i, int w) : imie(i), wiek(w) {
        cout << "Konstruktor z argumentami (lista inicjalizacyjna)" << endl;
    }

    ~Student() {
        cout << "Destruktor: " << imie << endl;
    }

    void wypisz() {
        cout << "Student: " << imie << ", wiek: " << wiek << endl;
    }
};

int main() {
    Student s1;
    Student s2("Julka", 22);

    s1.wypisz();
    s2.wypisz();

    cout << "\n\nNacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
