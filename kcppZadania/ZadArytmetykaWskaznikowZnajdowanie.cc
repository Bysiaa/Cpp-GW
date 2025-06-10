#include <iostream>
using namespace std;

int* maxElement(int* tab, int rozmiar) {
    int* max = tab; 

    for (int i = 1; i < rozmiar; i++) {
        if (*(tab + i) > *max) {
            max = tab + i;
        }
    }

    return max;
}

int main() {
    const int ROZMIAR = 6;
    int tablica[ROZMIAR] = { 3, 8, 2, 15, 6, 10 };

    cout << "Tablica: ";
    for (int i = 0; i < ROZMIAR; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    int* maxPtr = maxElement(tablica, ROZMIAR);

    cout << "Najwiekszy element to: " << *maxPtr << endl;
    cout << "Indeks: " << (maxPtr - tablica) << endl;

    return 0;
}
