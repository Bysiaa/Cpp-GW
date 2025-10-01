#include "ZadMainExample.h"
#include <iostream>
using namespace std;

void f1() {
    cout << "To jest funkcja 1, ktora nic nie robi" << endl;
}

int f2() {
    cout << "To jest funkcja 2, ktora zwraca wynik 5+5" << endl;
    cout << 5 + 5 << endl;
    return 5 + 5;
}

extern "C" void f3() {
    cout << "To jest funkcja 3, ktora jest zadeklarowana jako 'extern C'" << endl;
}

void f4() {
    cout << "To jest funkcja 4, ktora wypisuje wszystkie liczby od 1 do 5" << endl;
    int a = 0;
    do {
        a += 1;
        cout << a << endl;
    } while (a < 5);
}

extern "C" bool f5() {
    cout << "To jest funkcja 5, kolejna zadeklarowana jako 'extern C'" << endl;
    return true;
}

void ZadMainExample::wykonaj() {
    cout << "Uruchamiam wszystkie funkcje po kolei:" << endl;

    f1();
    f2();
    f3();
    f4();
    f5();
}
