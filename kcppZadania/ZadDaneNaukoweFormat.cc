/*
Zadanie 4.6
--------------------------------------
Napisz program, który wyświetli stałe matematyczne w trzech różnych formatach:

Stała          Wartość (domyślnie)    Notacja stała      Notacja naukowa
--------       -----------------      -------------      --------------
Pi             3.14159                3.141593           3.141593e+00
e              2.71828                2.718282           2.718282e+00
Złoty podział  1.61803                1.618034           1.618034e+00

- Użyj scientific i fixed do zmiany notacji
- Dla każdej notacji zastosuj precyzję 6 cyfr
- Szerokość kolumn: nazwa stałej (15 znaków), wartości (20 znaków)
- Nagłówki kolumn wyrównaj do środka (używając spacji)
- nazwij program: ZadDaneNaukoweFormat.cc
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double Pi = 3.141592653589793;
    const double e = 2.718281828459045;
    const double ZlotaPodzial = 1.6180339887;

    cout << setw(15) << left << "Stała"
        << setw(20) << right << "Wartość (domyślnie)"
        << setw(20) << "Notacja stała"
        << setw(20) << "Notacja naukowa" << endl;

    cout << setw(15) << left << "--------"
        << setw(20) << right << "-----------------"
        << setw(20) << "-------------"
        << setw(20) << "--------------" << endl;

    cout << setw(15) << left << "Pi"
        << setw(20) << right << fixed << setprecision(6) << Pi
        << setw(20) << fixed << setprecision(6) << Pi
        << setw(20) << scientific << setprecision(6) << Pi << endl;

    cout << setw(15) << left << "e"
        << setw(20) << right << fixed << setprecision(6) << e
        << setw(20) << fixed << setprecision(6) << e
        << setw(20) << scientific << setprecision(6) << e << endl;

    cout << setw(15) << left << "Złoty podział"
        << setw(20) << right << fixed << setprecision(6) << ZlotaPodzial
        << setw(20) << fixed << setprecision(6) << ZlotaPodzial
        << setw(20) << scientific << setprecision(6) << ZlotaPodzial << endl;

    cout << "\nNacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
