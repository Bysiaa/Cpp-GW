/*
Zadanie 4.0
--------------------------------------
Napisz program z przykładem zastosowania klasy stringstream z biblioteki sstream
- nazwać program LStringStream.cc
*/

#include <iostream>
#include <sstream>
#include <string>
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
    cout << "Zawartosc konwertera: " << konwerter.str() << endl;

    string dane = "999";
    int liczbaZStringa;
    stringstream(dane) >> liczbaZStringa;
    cout << "Zamieniony string na int: " << liczbaZStringa << endl;

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
