/*
Zadanie 2.3 (przeciążanie funkcji)
--------------------------------------
Napisz program który przeciąża funkcję do dodawania różnych typów danych.
Zaimplementuj funcję 'dodaj'
- dodawanie dwóch liczb całkowitych,
- dodawanie dwóch liczb zmiennoprzecinkowych,
- konkatenację dwóch napisów (std::string).
Nazwa: ZadPrzeciazanieDodaj.cc
*/

#include <iostream>
using namespace std;

int dodaj(int a, int b) {
    return a + b;
}

double dodaj(double c, double d) {
    return c + d;
}

string dodaj(string n1, string n2) {
    return n1 + n2;
}

int main() {
    int x = 5, y = 7;
    double z = 2.5, w = 3.7;
    string s1 = "Hello, ", s2 = "World!";

    cout << "Dodawanie int: " << dodaj(x, y) << endl;
    cout << "Dodawanie double: " << dodaj(z, w) << endl;
    cout << "Dodawanie string: " << dodaj(s1, s2) << endl;

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
