/*
Zadanie 2.5 (przeciążenie potęgowanie)
--------------------------------------
Napisz program z funkcją do obliczania wartości potęgi (przeciążenie dla różnych typów)
Napisz funkcję potega, która podnosi liczbę do potęgi, obsługując:
- liczby całkowite,
- liczby zmiennoprzecinkowe.
Nazwa: LPrzeciazaniePotega.cc
*/

#include <iostream>
#include <cmath>
using namespace std;

int potega(int a, int b) {
    return static_cast<int>(pow(a, b));
}

double potega(double a, double b) {
    return pow(a, b);
}


int main() {
    int x = 5, y = 7;
    double z = 7.927, w = 2.5;

    cout << "Potega int: " << potega(x, y) << endl;
    cout << "Potega double: " << potega(z, w) << endl;

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
