/*
Zadanie 3.1
-------------------------------------
Napisz program do zamiana miejscami dwóch liczb za pomocą wskaźników
Napisz funkcję zamien(int* a, int* b), która zamienia miejscami wartości przechowywane pod adresami a i b.
Nazwa: ZadArytmetykaWskaznikowZamiana.cc
*/

#include <iostream>
#include <cmath>
using namespace std;

void zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10;
    int b = 77;

    cout << "Przed zmiana: a = " << a << ", b = " << b << endl;
    zamien(&a, &b);
    cout << "Po zmianie: a = " << a << ", b = " << b << endl;

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
