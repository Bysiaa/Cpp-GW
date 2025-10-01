/*
Zadanie 4.10
--------------------------------------
Napisz program wykorzystujący instrukcje 'switch' gdzie:
- zamiast pojedynczego znaku będzie sprawdzane całe słowo (czy da się to zrobić bezpośrednio?)
- program może być uszczegółowieniem/modyfikacją (zrobić kopie pliku i zmienić kopie) tego co jest w ZadParzysteCase.cc
- nazwać program: ZadSwitch.cc
*/

#include <iostream>
#include <string>
using namespace std;

constexpr unsigned int simpleHash(const char* str, int h = 0) {
    return !str[h] ? 5381 : (simpleHash(str, h + 1) * 33) ^ str[h];
}

bool czyParzystaBit(int liczba) { return (liczba & 1) == 0; }
bool czyParzystaModulo(int liczba) { return (liczba % 2) == 0; }
bool czyParzystaTernary(int liczba) { return (liczba % 2 == 0) ? true : false; }

int main() {
    int x;
    string metoda;

    cout << "Podaj liczbe: ";
    cin >> x;

    cout << "Podaj metode sprawdzania (bit/modulo/ternary): ";
    cin >> metoda;

    switch (simpleHash(metoda.c_str())) {
        case simpleHash("bit"):
            cout << "Metoda BIT: " << (czyParzystaBit(x) ? "Parzysta" : "Nieparzysta") << endl;
        break;
        case simpleHash("modulo"):
            cout << "Metoda MODULO: " << (czyParzystaModulo(x) ? "Parzysta" : "Nieparzysta") << endl;
        break;
        case simpleHash("ternary"):
            cout << "Metoda TERNARY: " << (czyParzystaTernary(x) ? "Parzysta" : "Nieparzysta") << endl;
        break;
        default:
            cout << "Nieznana metoda!" << endl;
    }

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get(); cin.get();
    return 0;
}
