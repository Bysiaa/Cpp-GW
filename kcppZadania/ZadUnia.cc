/*
Zadanie 5.3
--------------------------------------
Pokaż działanie uni (niebezpieczenstwa, bledy)
- nazwij program: ZadUnia.cc
*/

#include <iostream>
#include <cstring>
using namespace std;

union Dane {
    int i;
    float f;
    char str[100];
};

int main() {
    Dane d;

    cout << "Rozmiar unii Dane: " << sizeof(Dane) << " bajtów" << endl;

    d.i = 42;
    cout << "Po przypisaniu d.i = 42:" << endl;
    cout << "d.i = " << d.i << endl;

    d.f = 3.14;
    cout << "\nPo przypisaniu d.f = 3.14:" << endl;
    cout << "d.f = " << d.f << endl;
    cout << "UWAGA: d.i = " << d.i << " (może być śmieciowe!)" << endl;

    strcpy(d.str, "Test");
    cout << "\nPo przypisaniu d.str = \"Test\":" << endl;
    cout << "d.str = " << d.str << endl;
    cout << "UWAGA: d.i = " << d.i << " | d.f = " << d.f << " (śmieci!)" << endl;

    cout << "\nPrzypisanie za długiego tekstu do unii (ryzykowne!)" << endl;
    strcpy(d.str, "To jest bardzo długi tekst...");

    cout << "d.str = " << d.str << endl;
    cout << "UWAGA: możliwe przekroczenie pamięci (undefined behavior!)" << endl;

    return 0;
}
