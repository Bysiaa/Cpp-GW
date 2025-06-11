/*
Napisać program który zawiera:
- funkcję main
- 5 innych funkcji, z czego dwie zadeklarowane jako: extern "C"
- dodatkowo do wykonania w późniejszej cześci kursu: wywołując program decydujemy, które z funkcji mają zostać wykonane przez podanie tego w liście argumentów przekazanych do funkcji main
- nazwać program: ZadMainExample.cc
*/

#include <iostream>
using namespace std;

void f1() {
    cout << "To jest funkcja 1, ktora nic nie robi" << endl;
    return;
}

int f2() {
    cout << "To jest funkcja 2, ktora zwraca wynik 5+5" << endl;
    cout << 5 + 5 << endl;
    return 5 + 5;
}

extern "C" void f3() {
    cout << "To jest funkcja 3, ktora jest zadeklarowana jako 'extern 'C''" << endl;
    return;
}

void f4() {
    cout << "To jest funkcja 4, ktora wypisuje wszystkie liczby od 1 do 5" << endl;
    int a = 0;
    do {
        a += 1;
        cout << a << endl;
    } while (a < 5);
    return;
}

extern "C" bool f5() {
    cout << "To jest funkcja 5, i kolejna, ktora jest zadeklarowana jako 'extern 'C''" << endl;
    return true;
}


int main(int arg, char* funkcje[])
{
    for (int i = 1; i < arg; i++) {

        string nazwa_funkcji = funkcje[i];

        if (nazwa_funkcji == "f1") {
            f1();
        }
        else if (nazwa_funkcji == "f2") {
            f2();
        }
        else if (nazwa_funkcji == "f3") {
            f3();
        }
        else if (nazwa_funkcji == "f4") {
            f4();
        }
        else if (nazwa_funkcji == "f5") {
            f5();
        }
        else {
            cout << "Taka funkcja nie istnieje";
        }
    }
    return 0;
}