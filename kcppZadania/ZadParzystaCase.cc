/*
Zadanie 4.8
--------------------------------------
Napisz program z użyciem 'switch' wybierajacy do wykonania jedną z trzech funkcji z zadania ZadParzysta.cc:
- nazwać program: ZadParzystaCase.cc (kopia ZadParzyste do ZadParzysteCase+switch, lub pominięcie ZadParzyste i umieszczenie wszystkiego w ZadParzystaCase)
*/

#include <iostream>
using namespace std;

bool czyParzystaBit(int liczba) {
    return (liczba & 1) == 0;
}

bool czyParzystaModulo(int liczba) {
    return (liczba % 2) == 0;
}

bool czyParzystaTernary(int liczba) {
    return (liczba % 2 == 0) ? true : false;
}

int main() {
    int x, wybor;

    cout << "Podaj liczbe: ";
    cin >> x;

    cout << "Wybierz metode sprawdzania parzystosci:" << endl;
    cout << "1. Bitowe (&)" << endl;
    cout << "2. Modulo (%)" << endl;
    cout << "3. Operator warunkowy (?:)" << endl;
    cout << "Twoj wybor: ";
    cin >> wybor;

    switch (wybor) {
        case 1:
            cout << x << "bit: "
                << (czyParzystaBit(x) ? "TAK" : "NIE") << endl;
        break;
        case 2:
            cout << x << "modulo: "
                << (czyParzystaModulo(x) ? "TAK" : "NIE") << endl;
        break;
        case 3:
            cout << x << "ternary: "
                << (czyParzystaTernary(x) ? "TAK" : "NIE") << endl;
        break;
        default:
            cout << "Niepoprawny wybor!" << endl;
    }

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();
    cin.get(); //dwa razy, bo inaczej się wywala

    return 0;
}
