#include <iostream>
#include <sstream>
#include <string>
#include "LStringStream.h"
using namespace std;

int main() {
    string tekst = "123 45.67 C++";
    stringstream ss(tekst);

    int liczba;
    float zmiennoprzecinkowa;
    string jezyk;

    ss >> liczba >> zmiennoprzecinkowa >> jezyk;

    cout << "Odczytano ze stringstream:" << endl;
    cout << "Liczba calkowita: " << liczba << endl;
    cout << "Liczba zmiennoprzecinkowa: " << zmiennoprzecinkowa << endl;
    cout << "Slowo: " << jezyk << endl;

    int a = 2025;
    stringstream konwerter;
    konwerter << "Rok: " << a;

    string wynik = konwerter.str();
    cout << "\nZawartosc konwertera: " << wynik << endl;

    string dane = "999";
    int liczbaZStringa;
    stringstream(dane) >> liczbaZStringa;
    cout << "\nZamieniony string na int: " << liczbaZStringa << endl;

    return 0;
}
