/*
Napisać program który zawiera:
- funkcję main
- 5 innych funkcji, z czego dwie zadeklarowane jako: extern "C"
- dodatkowo do wykonania w późniejszej cześci kursu: wywołując program decydujemy, które z funkcji mają zostać wykonane przez podanie tego w liście argumentów przekazanych do funkcji main
- nazwać program: ZadMainExample.cc
*/

#include <iostream>
#include <string>
using namespace std;

void f1() {
    cout << "To jest funkcja 1, która nic nie robi";
    return;
}

int f2() {
    cout << "To jest funkcja 2, która zwraca wynik 5+5";
    return 5 + 5;
}

extern "C" void f3() {
    cout << "To jest funkcja 3, która jest zadeklarowana jako 'extern 'C''";
    return;
}

void f4() {
    cout << "To jest funkcja 4, która wypisuje wszystkie liczby od 1 do 5";
    int a = 0;
    do {
        a += 1;
        cout << a << endl;
    } while (a < 5);
    return;
}

extern "C" bool f5() {
    cout << "To jest funkcja 5, która jest zadeklarowana jako 'extern 'C'' i zwraca wartość True";
    return true;
}


int main(int arg, char* funkcje[])
{
    for (int i = 1; i < arg; i++) {
        string argName = funkcje[i];
        if (funkcje[i] == "f1") {
            f1();
        }
        else if (funkcje[i] == "f2") {
            f2();
        }
        else if (funkcje[i] == "f3") {
            f3();
        }
        else if (funkcje[i] == "f4") {
            f4();
        }
        else if (funkcje[i] == "f5") {
            f5();
        }
        else {
            cout << "Taka funkcja nie istnieje";
        }
    }

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
