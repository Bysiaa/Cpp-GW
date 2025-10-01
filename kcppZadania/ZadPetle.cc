/*
Zadanie 4.9
--------------------------------------
Napisz program pokazujący działanie instrukcji (każda jako osobna funkcja; trzy funkcje od a do c):
(a) while    (pokazujące while z inkrementacją: i++, ++i)
(b) do-while (pokazujące do-while z inkrementacją: i++, ++i)
(c) for
- wykorzystaj: break, continue, return
- nazwać program: ZadPetle.cc
*/

#include <iostream>
using namespace std;

void petlaWhile() {
    cout << "== Petla WHILE ==" << endl;
    int i = 0;

    while (i < 10) {
        if (i == 3) {
            cout << "Continue i = " << i << endl;
            i++;
            continue;
        }
        if (i == 7) {
            cout << "Break i = " << i << endl;
            break;
        }

        cout << "i = " << i << endl;
        i++;
    }
}

void petlaDoWhile() {
    cout << "\n== Petla DO-WHILE ==" << endl;
    int i = 0;

    do {
        if (i == 2) {
            cout << "Continue i = " << i << endl;
            i++;
            continue;
        }
        if (i == 5) {
            cout << "Break i = " << i << endl;
            break;
        }

        cout << "i = " << i << endl;
        ++i;
    } while (i < 10);
}

void petlaFor() {
    cout << "\n== Petla FOR ==" << endl;

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            cout << "Continue i = " << i << endl;
            continue;
        }
        if (i == 8) {
            cout << "Return i = " << i << endl;
            return;
        }

        cout << "i = " << i << endl;
    }
}

int main() {
    petlaWhile();
    petlaDoWhile();
    petlaFor();

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
