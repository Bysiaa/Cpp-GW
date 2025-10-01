/*
Zadanie 3.9 (LArytmetykaWskaznikowTablice.cc)
-------------------------------------
Operacje na dwóch tablicach z użyciem wskaźników
Napisz program, który:
- Zadeklaruje dwie tablice liczb zmiennoprzecinkowych o rozmiarze 5.
- Wypełni pierwszą tablicę wartościami podanymi przez użytkownika, a drugą tablicę wartościami pierwszej tablicy pomnożonymi przez 2 (używając wyłącznie wskaźników).
- Stworzy trzecią tablicę, która będzie zawierała sumy odpowiadających sobie elementów z dwóch pierwszych tablic (używając arytmetyki wskaźników).
- Wyświetli zawartość wszystkich trzech tablic, używając wskaźników do iteracji po elementach.
Nazwać program: ZadArytmetykaWskaznikowTabliceB.cc
*/

#include <iostream>
using namespace std;

int main() {
    const int r = 5;
    double tab1[r], tab2[r], tab3[r];

    cout << "Podaj 5 liczb zmiennoprzecinkowych dla tablicy 1:" << endl;
    for (double* p = tab1; p < tab1 + r; ++p) {
        cin >> *p;
    }

    double* p1 = tab1;
    double* p2 = tab2;
    for (int i = 0; i < r; ++i) {
        *p2 = (*p1) * 2;
        ++p1;
        ++p2;
    }

    p1 = tab1;
    p2 = tab2;
    double* p3 = tab3;
    for (int i = 0; i < r; ++i) {
        *p3 = *p1 + *p2;
        ++p1;
        ++p2;
        ++p3;
    }

    cout << "\nTablica 1: ";
    for (double* p = tab1; p < tab1 + r; ++p) cout << *p << " ";

    cout << "\nTablica 2: ";
    for (double* p = tab2; p < tab2 + r; ++p) cout << *p << " ";

    cout << "\nTablica 3: ";
    for (double* p = tab3; p < tab3 + r; ++p) cout << *p << " ";

    cout << "\n\nNacisnij Enter, aby zakonczyc program...";
    cin.get();
    cin.get();

    return 0;
}
