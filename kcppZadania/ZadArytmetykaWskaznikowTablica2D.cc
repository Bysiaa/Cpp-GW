/*
Zadanie 3.10 (LArytmetykaWskaznikowTablice.cc)
-------------------------------------
Pokazać w jakiej kolejności jest adresowana tablica dwuwymiarowa (Tab[3][3]).
Wypisać adresy poszczególnych elementów.
- nazwać program: ZadArytmetykaWskaznikowTablica2D.cc
*/

#include <iostream>
using namespace std;

int main() {
    int Tab[3][3];

    cout << "Adresy elementow tablicy 3x3:" << endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Tab[" << i << "][" << j << "] = " << &Tab[i][j] << endl;
        }
    }

    cout << "\nAdres pierwszego wiersza Tab[0]: " << &Tab[0] << endl;
    cout << "Adres drugiego wiersza Tab[1]: " << &Tab[1] << endl;
    cout << "Adres trzeciego wiersza Tab[2]: " << &Tab[2] << endl;

    cout << "\nNacisnij Enter, aby zakonczyc program...";
    cin.get();
    return 0;
}
