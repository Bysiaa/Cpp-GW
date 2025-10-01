/*
Zadanie 4.4
--------------------------------------
Napisz program, który wyświetli tabelę produktów w następującym formacie:

| Nazwa          | Cena    | Ilosc |
|----------------|---------|-------|
| Chleb          |   4.99  |    5  |
| Mleko          |   3.20  |   10  |
| Jajka (10 szt) |   8.50  |    3  |

- Użyj manipulatorów setw, left i right do wyrównania kolumn
- Ceny wyświetl z dokładnością do 2 miejsc po przecinku
- Szerokość kolumn: Nazwa (15 znaków), Cena (8 znaków), Ilosc (7 znaków)
- nazwij program: ZadTabelaFormat.cc
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string nazwy[] = { "Chleb", "Mleko", "Jajka (10 szt)" };
    double ceny[] = { 4.99, 3.20, 8.50 };
    int ilosci[] = { 5, 10, 3 };

    cout << "|"
        << setw(15) << left << "Nazwa"
        << "|"
        << setw(8) << right << "Cena"
        << "|"
        << setw(7) << right << "Ilosc"
        << "|" << endl;

    cout << "|" << string(15, '-')
        << "|" << string(8, '-')
        << "|" << string(7, '-')
        << "|" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "|"
            << setw(15) << left << nazwy[i]
            << "|"
                << setw(8) << right << fixed << setprecision(2) << ceny[i]
                << "|"
                    << setw(7) << right << ilosci[i]
                    << "|" << endl;
    }

    cout << "\nNacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
