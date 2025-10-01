/*
Zadanie 5.1
--------------------------------------
Napisz prosty program z klasą
- metody deklarowane i definiowane w klasie
- metody deklarowane w klasie, a definiowane poza klasą
- zastosowanie 3 sekcji: public, private, protected
- zmienne w każdej z sekcji
- funkcje, które mają dostęp do zmiennych z sekcji protected i private
- funkcje inline
- nazwij program: ZadClass.cc
*/

#include <iostream>
using namespace std;

#define PI 3.14159
#define KWADRAT(x) ((x) * (x))
#define TO_STRING(x) #x
#define LACZ(a, b) a##b
#define DEBUG

int main() {
    cout << "=== Przyklad uzycia dyrektyw preprocesora ===" << endl;

    cout << "PI = " << PI << endl;
    cout << "Kwadrat(5) = " << KWADRAT(5) << endl;

    cout << "TO_STRING(Hello World) = " << TO_STRING(Hello World) << endl;

    int LACZ(x, y) = 42;
    cout << "Wartosc zmiennej xy = " << xy << endl;

#ifdef DEBUG
    cout << "Kompilacja DEBUG" << endl;
#else
    cout << "Kompilacja RELEASE" << endl;
#endif

#ifndef PI2
#define PI2 6.28318
#endif
    cout << "PI2 = " << PI2 << endl;

    auto kwadratNormalny = [](int x) { return x * x; };
    cout << "Kwadrat, zwykła funkcja: " << kwadratNormalny(5) << endl;

    string s = "Hello World";
    cout << "TO_STRING, ręcznie: " << s << endl;

    int xy2 = 99;
    cout << "Wartosc zmiennej xy2 = " << xy2 << endl;

    return 0;
}
