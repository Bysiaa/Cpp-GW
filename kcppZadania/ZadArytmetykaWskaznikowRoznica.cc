/*
Zadanie 3.5
-------------------------------------
Napisz program: Różnica między dwoma wskaźnikami
Stwórz program, który definiuje tablicę 10 liczb całkowitych, a następnie oblicza różnicę między dwoma wskaźnikami wskazującymi na różne elementy tej tablicy.
Nazwa: ZadArytmetykaWskaznikowRoznica.cc
*/

#include <iostream>
using namespace std;

int main() {
    int tab[10] = { 1, 6, 4, 10, 3, 17, 4, 72, 2, 11 };

    int* w1 = &tab[2];
    int* w2 = &tab[7];

    ptrdiff_t roznica = w2 - w1;

    cout << "Elementy tablicy: ";
    for (int i = 0; i < 10; i++) cout << tab[i] << " ";
    cout << endl;

    cout << "Wskaznik 1 wskazuje na: " << *w1 << endl;
    cout << "Wskaznik 2 wskazuje na: " << *w2 << endl;
    cout << "Roznica miedzy wskaźnikami (liczba elementow): " << roznica << endl;

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}