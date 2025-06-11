#include <iostream>
#include "ZadArytmetykaWskaznikowPrzesuniecie.h"
using namespace std;

void przesun(int* tab, int rozmiar) {
    int ostatni = *(tab + rozmiar - 1);

    for (int i = rozmiar - 1; i > 0; i--) {
        *(tab + i) = *(tab + i - 1);
    }

    *tab = ostatni;
}

int main() {
    const int ROZMIAR = 5;
    int tablica[ROZMIAR] = { 1, 2, 3, 4, 5 };

    cout << "Przed przesunieciem: ";
    for (int i = 0; i < ROZMIAR; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    przesun(tablica, ROZMIAR);

    cout << "Po przesunieciu:    ";
    for (int i = 0; i < ROZMIAR; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    return 0;
}
