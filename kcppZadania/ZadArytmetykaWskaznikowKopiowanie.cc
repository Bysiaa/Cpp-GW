/*
Zadanie 3.6
-------------------------------------
Napisz program do kopiowanie tablicy przy użyciu wskaźników.
Napisz funkcję kopiujTablice, która kopiuje jedną tablicę do drugiej, korzystając wyłącznie ze wskaźników.
Nazwa: ZadArytmetykaWskaznikowKopiowanie.cc
*/

#include <iostream>
using namespace std;

void kopiujTablice(int* src, int* dst, int r) {
    for (int i = 0; i < r; i++) {
        *dst = *src;
        src++;
        dst++;
    }
}

int main() {
    int tab1[] = { 5, 2, 4, 7, 6 };
    int tab2[5];

    kopiujTablice(tab1, tab2, 5);

    cout << "Skopiowana tablica: ";
    for (int i = 0; i < 5; i++) {
        cout << tab2[i] << " ";
    }
    cout << endl;

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
