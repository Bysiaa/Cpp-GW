/*
Zadanie 3.8 (LArytmetykaWskaznikowTablice.cc)
-------------------------------------
Operacje na tablicy przy użyciu wskaźników
Napisz program, który:
- Zadeklaruje statyczną tablicę 10 liczb całkowitych i wypełni ją wartościami od 1 do 10.
- Używając wskaźników, obliczy i wyświetli sumę elementów tablicy.
- Znajdzie i wyświetli maksymalny element w tablicy używając arytmetyki wskaźników.
- Odwróci kolejność elementów w tablicy używając wyłącznie wskaźników (bez użycia indeksów []).
Nazwać program: ZadArytmetykaWskaznikowTabliceA.cc
*/

#include <iostream>
using namespace std;

int main() {
    const int ROZMIAR = 10;
    int tab[ROZMIAR];

    for (int i = 0; i < ROZMIAR; ++i) {
        *(tab + i) = i + 1;
    }

    int suma = 0;
    for (int* p = tab; p < tab + ROZMIAR; ++p) {
        suma += *p;
    }
    cout << "Suma elementów tablicy: " << suma << endl;

    int* maxPtr = tab;
    for (int* p = tab + 1; p < tab + ROZMIAR; ++p) {
        if (*p > *maxPtr) maxPtr = p;
    }
    cout << "Maksymalny element tablicy: " << *maxPtr << endl;

    int* start = tab;
    int* end = tab + ROZMIAR - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        ++start;
        --end;
    }

    cout << "Tablica po odwróceniu: ";
    for (int* p = tab; p < tab + ROZMIAR; ++p) {
        cout << *p << " ";
    }
    cout << endl;

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();
    return 0;
}
