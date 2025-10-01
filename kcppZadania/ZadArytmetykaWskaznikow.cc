/*
Zadanie 3.11 (LArytmetykaWskaznikow.cc)
-------------------------------------
Co robią poniższe operacje? Napisać program który pokazuje ich działanie.
1. Funkcja1()
p++;
++p;
++*p;
++(*p);
++*(p);
*p++;
(*p)++;
*(p)++;
*++p;
*(++p);

oraz (Funkcja2()) w analogii do LArytmetykaWzkaznikowZmienne.cc aby wypisywał na ekran:

1.  A, B, C: 0  0   0
2.  A, B, C: 0  10  0
3.  A, B, C: 0  10  20
4.  A, B, C: 0  30  20
5.  A, B, C: 40 30  20
6.  A, B, C: 40 50  20
7.  A, B, C: 40 50  60
8.  A, B, C: 40 70  60
9.  A, B, C: 80 70  60
10. A, B, C: 80 90  60

przy początkowych wartościach zmiennych: int a = 0, b = 0, c = 0;
- nazwać program: ZadArytmetykaWskaznikow.cc
*/

#include <iostream>
using namespace std;

void Funkcja1() {
    int tab[3] = { 1, 2, 3 };
    int* p = tab;

    cout << "Tab poczatkowe: ";
    for (int i = 0; i < 3; ++i) cout << tab[i] << " ";
    cout << endl;

    cout << "Przesunięcie wskaźnika na tab[1]:\t" << p++ << "\n";
    cout << "Przesunięcie wskaźnika na tab[2]:\t" << ++p << "\n";
    cout << "Inkrementacja wartości pod tab[2] (3 -> 4):/t" << ++ * p << "\n";
    cout << "To samo co wyżej (4 -> 5):/t" << ++(*p) << "\n";
    cout << "To samo (5 -> 6):/t" << ++*(p) << "\n";
    cout << "Wartość pod p (6) użyta, p przesunięty na tab[3] (poza tablicę):/t" << *p++ << "\n";
    cout << "Już poza tablicę – niebezpieczne, tylko dla demonstracji:/t" << (*p)++ << "\n";
    cout << "Podobnie:/t" << *(p)++ << "\n";
    cout << "p przesunięty, potem dereferencja:/t" << *++p << "\n";
    cout << "To samo:/t" << *(++p) << "\n";
}

void Funkcja2() {
    int a = 0, b = 0, c = 0;
    int* wsk = &a;

    a = b = c = 0;
    cout << "1. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    b = 10;
    cout << "2. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    wsk = &b;
    *wsk = 20;
    cout << "3. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    wsk = &a;
    *(wsk + 1) = 30; // wsk+1 wskazuje na b
    cout << "4. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *(&a + 1) = 40; // &a+1 to b
    cout << "5. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *(&c - 1) = 50; // &c-1 to b
    cout << "6. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *((int*)&b + 1) = 60; // przykład manipulacji wskaźnikami typu void/int
    cout << "7. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *(int*)(&b) = 70;
    cout << "8. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *((int*)&b - 1) = 80;
    cout << "9. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *(int*)(&b + 1) = 90;
    cout << "10. A, B, C: " << a << "\t" << b << "\t" << c << endl;
}

int main() {
    cout << "--- Funkcja1 (demonstracja operatorow) ---" << endl;
    Funkcja1();

    cout << "\n--- Funkcja2 (A, B, C) ---" << endl;
    Funkcja2();

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();
    return 0;
}
