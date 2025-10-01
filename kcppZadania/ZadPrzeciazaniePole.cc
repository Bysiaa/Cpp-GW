/*
Zadanie 2.2 (przeciążanie funkcji)
--------------------------------------
Napisz program który przeciążenia funkcję do obliczania pola: pole(...).
Napisz funkcję pole, która będzie przeciążona dla:
- kwadratu (przyjmuje długość boku),
- prostokąta (przyjmuje długości dwóch boków),
- koła (przyjmuje promień).
nazwa: ZadPrzeciazaniePole.cc
*/

#include <iostream>
using namespace std;

double pole(double bok) {
    return bok * bok;
}

double pole(double bok1, double bok2) {
    return bok1 * bok2;
}

double pole(float promien) {
    return 3.14 * promien * promien;
}

int main() {
    double bok1 = 5.0;
    double bok2 = 4.0;
    float promien = 3.0f;

    cout << "Pole kwadratu o boku " << bok1 << ": " << pole(bok1) << endl;
    cout << "Pole prostokata o bokach " << bok1 << " i " << bok2 << ": " << pole(bok1, bok2) << endl;
    cout << "Pole kola o promieniu " << promien << ": " << pole(promien) << endl;

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
