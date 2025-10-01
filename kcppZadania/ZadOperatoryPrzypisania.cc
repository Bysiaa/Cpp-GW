/*
Zadanie 3.12 (LOperatoryPrzypisania.cc)
-------------------------------------
Napisać program z przykładami:
(1) operatorow arytmetycznych i (2) operatorow przypisania
(1) i (2) jako osobne funkcje: (1) OperatoryArytmetyczne (2) OperatoryPrzypisania
- nazwać program: ZadOperatoryPrzypisania.cc
*/

#include <iostream>
using namespace std;

void OperatoryArytmetyczne() {
    int a = 7, b = 3;

    cout << "--- Operatory arytmetyczne ---" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "a++ = " << a++ << " (po inkrementacji a = " << a << ")" << endl;
    cout << "++b = " << ++b << endl;
    cout << endl;
}

void OperatoryPrzypisania() {
    int x = 5, y = 2;

    cout << "--- Operatory przypisania ---" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    x += y;
    cout << "x += y -> x = " << x << endl;

    x -= y;
    cout << "x -= y -> x = " << x << endl;

    x *= y;
    cout << "x *= y -> x = " << x << endl;

    x /= y;
    cout << "x /= y -> x = " << x << endl;

    x %= y;
    cout << "x %= y -> x = " << x << endl;

    x = y;
    cout << "x = y -> x = " << x << endl;

    cout << endl;
}

int main() {
    OperatoryArytmetyczne();
    OperatoryPrzypisania();

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}