/*
Zadanie 3.7 (LArytmetykaWskaznikowZmienne.cc)
-------------------------------------
Kierunek adresowania pamięci
- wyjaśnić w komentarzu do programu podającego przykład:
- wypisywanie adresów deklarowanych zmiennych
- nazwać program: ZadAdresowaniePamieci.cc
*/

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void SizeofPointer() {
    int a;
    int* wsk = &a;
    cout << "Address(zmienna,wskaznik): " << &a << "\t" << &wsk << endl;
    cout << "Sizeof(zmienna,wskaznik):  " << sizeof(a) << "\t" << sizeof(wsk)
        << endl;
}

int main() {

    // zmienne różnego typu
    int a;
    int b;
    int c;
    float x;
    double y;
    double z;
    int* wsk_int; // tutaj jest wskaźnik

    // rozmiary typów (int, float, double)
    cout << "Size of intiger: " << sizeof(int) << endl;
    cout << "Size of float:   " << sizeof(float) << endl;
    cout << "Size of double:  " << sizeof(double) << endl;

    // wypisywanie adresów zmiennych
    cout << "--- C++ ------------------------------" << endl;
    ostringstream sa;
    sa << &a;
    string a1 = sa.str();
    cout << "Adres zmiennej A: " << &a << "\t dec: " << hextodec(a1) << endl;

    unsigned long p = (unsigned long)&a;
    cout << "Adres zmiennej A: " << &a << "\t dec: " << p << endl;

    ostringstream sb;
    sb << &b;
    string b1 = sb.str();
    cout << "Adres zmiennej B: " << &b << "\t dec: " << hextodec(b1) << endl;

    ostringstream sc;
    sc << &c;
    string c1 = sc.str();
    cout << "Adres zmiennej C: " << &c << "\t dec: " << hextodec(c1) << endl;

    ostringstream sx;
    sx << &x;
    string x1 = sx.str();
    cout << "Adres zmiennej X: " << &x << "\t dec: " << hextodec(x1) << endl;

    ostringstream sy;
    sy << &y;
    string y1 = sy.str();
    cout << "Adres zmiennej Y: " << &y << "\t dec: " << hextodec(y1) << endl;

    ostringstream sz;
    sz << &z;
    string z1 = sz.str();
    cout << "Adres zmiennej Z: " << &z << "\t dec: " << hextodec(z1) << endl;

    cout << "Adres zmiennej WSK_INT: " << &wsk_int << endl;

    // tutaj się kończy wypisywanie adresów zmiennych

    // podstawowe ustawienie
    a = b = c = 0;
    cout << "1. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    // zmiana wartości b na 10, nic specjalnego się nie dzieje
    b = 10;
    cout << "2. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    // zmiana wartości adresu zmiennej b, czyli zmieniamy wartość na 20 adresu, tam gdzie jest zapisane b
    wsk_int = &b;
    *wsk_int = 20;
    cout << "3. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    // przesuwa wskaźnik o jedną komórkę
    wsk_int = &a;
    *(wsk_int + 1) = 30;
    cout << "4. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    // adresowanie ręczne
    *(&a + 1) = 40; // adres (a + 1) = 40 -> adres b = 40
    cout << "5. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    // to samo co wyżej, ale o jeden adres "niżej"
    *(&c - 1) = 50;
    cout << "6. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *((int*)&x - 2) = 60;
    cout << "7. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *(int*)(&x - 1) = 70;
    cout << "8. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *((int*)&wsk_int - 2) = 80;
    cout << "9. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *(int*)(&wsk_int - 1) = 90;
    cout << "10. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    SizeofPointer();

    return 0;
}
