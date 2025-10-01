#include "ZadUnia.h"
#include <iostream>
#include <cstring>
using namespace std;

union Dane {
    int i;
    float f;
    char str[200];
};

void ZadUnia::wykonaj() {
    Dane d;

    cout << "Rozmiar unii Dane: " << sizeof(Dane) << " bajtow" << endl;

    d.i = 42;
    cout << "Po przypisaniu d.i = 42:" << endl;
    cout << "d.i = " << d.i << endl;

    d.f = 3.14;
    cout << "Po przypisaniu d.f = 3.14:" << endl;
    cout << "d.f = " << d.f << endl;

    strcpy(d.str, "Test");
    cout << "Po przypisaniu d.str = 'Test':" << endl;
    cout << "d.str = " << d.str << endl;

    cout << "Przypisanie za dlugiego tekstu do unii" << endl;
    strcpy(d.str, "To jest bardzo dlugi tekst...");
}
