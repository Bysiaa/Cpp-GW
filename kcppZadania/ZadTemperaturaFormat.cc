/*
Zadanie 4.5
--------------------------------------
Napisz program, który wyświetli tabelę konwersji temperatur z Celsjusza na Fahrenheita dla wartości od -10 do 10 stopni C (co 5 stopni) w formacie:

Celsjusz   Fahrenheit
-------    ---------
  -10        14.00
   -5        23.00
    0        32.00
    5        41.00
   10        50.00

- Użyj fixed i setprecision dla temperatur w Fahrenheitach
- Liczby wyświetl z wiodącymi spacjami (dodatnie) lub minusem (ujemne)
- Wyrównaj liczby do prawej w kolumnach
- nazwij program: ZadTemperaturaFormat.cc
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(8) << right << "Celsjusz"
        << "   "
        << setw(10) << right << "Fahrenheit"
        << endl;

    cout << setw(8) << right << "-------"
        << "   "
        << setw(10) << right << "---------"
        << endl;

    for (int c = -10; c <= 10; c += 5) {
        double f = c * 9.0 / 5.0 + 32;
        cout << setw(8) << right << c
            << "   "
            << setw(10) << right << fixed << setprecision(2) << f
            << endl;
    }

    cout << "\nNacisnij Enter, aby zakonczyc program...";
    cin.get();
    return 0;
}
