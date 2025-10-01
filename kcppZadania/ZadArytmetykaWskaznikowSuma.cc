/*
Zadanie 3.2
-------------------------------------
Napisz program do sumowania elementów tablicy za pomocą wskaźników
Stwórz funkcję suma, która przyjmuje wskaźnik do tablicy liczb całkowitych oraz jej rozmiar, a następnie zwraca sumę jej elementów.
Nazwa: ZadArytmetykaWskaznikowSuma.cc
*/

#include <iostream>
using namespace std;

int suma(int* tab, int r) {
    int ret = 0;
    for (int i = 0; i < r; i++) {
        ret += tab[i];
    }
    return ret;
}

int main() {
    int arr[] = { 1, 5, 9, 0, 4, 7, 3 };
    int rozmiar = sizeof(arr) / sizeof(arr[0]);

    cout << "Elementy tablicy: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int wynik = suma(arr, rozmiar);
    cout << "Suma elementów tablicy: " << wynik << endl;

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
