/*
Zadanie 3.4
-------------------------------------
Napisz program do przesunięcie elementów tablicy o jedno miejsce w prawo
Napisz funkcję przesun, która przesuwa wszystkie elementy tablicy o jedno miejsce w prawo (ostatni element przechodzi na początek), wykorzystując wskaźniki.
Nazwa: ZadArytmetykaWskaznikowPrzesuniecie.cc
*/

#include <iostream>
using namespace std;

void przesun(int* tab, int r) {
    if (r <= 1) return;

    int ostatni = *(tab + r - 1);

    for (int i = r - 1; i > 0; i--) {
        *(tab + i) = *(tab + i - 1);
    }

    *tab = ostatni;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int rozmiar = sizeof(arr) / sizeof(arr[0]);

    cout << "Przed przesunięciem: ";
    for (int i = 0; i < rozmiar; i++) cout << arr[i] << " ";
    cout << endl;

    przesun(arr, rozmiar);

    cout << "Po przesunięciu:   ";
    for (int i = 0; i < rozmiar; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}

