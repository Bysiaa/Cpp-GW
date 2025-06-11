#include <iostream>
#include <cstring>
#include "ZadUnia.h"
using namespace std;

union Dane {
    int i;
    float f;
    char str[20];
};

int main() {
    Dane d;

    cout << "Rozmiar unii Dane: " << sizeof(Dane) << " bajtow" << endl;

    d.i = 42;
    cout << "Po przypisaniu d.i = 42:" << endl;
    cout << "d.i = " << d.i << endl;

    d.f = 3.14;
    cout << "Po przypisaniu d.f = 3.14:" << endl;
    cout << "d.f = " << d.f << endl;
    cout << "UWAGA: d.i = " << d.i << " (może być smieciowe!)" << endl;

    strcpy(d.str, "Test");
    cout << "Po przypisaniu d.str = 'Test':" << endl;
    cout << "d.str = " << d.str << endl;
    cout << "UWAGA: d.i = " << d.i << " | d.f = " << d.f << " (smieci!)" << endl;

    cout << "Przypisanie za dlugiego tekstu do unii" << endl;
    strcpy(d.str, "To jest bardzo dlugi tekst...");

    cout << "d.str = " << d.str << endl;
    cout << "UWAGA: mozliwe przekroczenie pamieci (undefined behavior!)" << endl;

    return 0;
}
