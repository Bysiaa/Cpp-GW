/*
Zadanie 3.3
-------------------------------------
Napisz program znajdujący największy element w tablicy przy użyciu wskaźników
Napisz funkcję maxElement, która przyjmuje wskaźnik na tablicę liczb oraz jej rozmiar i zwraca wskaźnik do największego elementu.
Nazwa: ZadArytmetykaWskaznikowZnajdowanie.cc
*/

#include <iostream>
using namespace std;

int* maxElement(int* tab, int r) {
    if (r <= 0) return 0;
    int* ret = tab;
    for (int i = 1; i < r; i++) {
        if (*ret < tab[i]) { ret = &tab[i]; }
    }
    return ret;
}

int main() {
    int arr[] = { 3, 7, 2, 9, 5 };
    int* maxPtr = maxElement(arr, 5);
    cout << "Najwiekszy element: " << *maxPtr << endl;

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
