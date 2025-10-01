/*
Zadanie 2.1
--------------------------------------
Zadanie: Napisać program z czterema funkcjami z których każda zwraca inaczej:
1. Przez wartość
2. Przez referencje
3. Przez wskaźnik
4. Tablice (proszę się zastanowić o co tak naprawę chodzi)
- nazwać program: ZadZwracanie.cc
*/

#include <iostream>
#include <string>
using namespace std;

int zwrocWartosc() {
    int x = 42;
    return x;
}

int& zwrocReferencja(int& y) {
    return y;
}

int* zwrocWskaznik(int* ptr) {
    return ptr;
}

int* zwrocTablice() {
    static int arr[5] = { 1,2,3,4,5 };
    return arr;
}


int main(int arg, char* funkcje[])
{
    int wartosc = zwrocWartosc();
    cout << "Zwracanie przez wartość: " << wartosc << endl;

    int b = 100;
    int& ref = zwrocReferencja(b);
    cout << "Zwracanie przez referencję: " << ref << endl;
    ref = 300;
    cout << "Po zmianie ref na 300, int b to: " << b << endl;

    int c = 300;
    int* wsk = zwrocWskaznik(&c);
    cout << "Zwracanie przez wskaźnik: " << *wsk << endl;
    *wsk = 400;
    cout << "Po zmianie *wsk na 400, int c to: " << c << endl;

    int* arr = zwrocTablice();
    cout << "Tablica: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
