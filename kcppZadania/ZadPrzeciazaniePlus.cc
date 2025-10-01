/*
Zadanie 2.4 (przeciążanie operatora +)
--------------------------------------
Przeciążenie operatora + dla klasy Punkt
Stwórz klasę Punkt przechowującą współrzędne (x, y). Przeciąż operator +, tak aby można było dodawać do siebie dwa obiekty klasy Punkt.
Nazwa: ZadPrzeciazaniePlus.cc
*/

#include <iostream>
using namespace std;

class Punkt {
private:
    double x, y;

public:
    Punkt(double a = 0, double b = 0) : x(a), y(b) {}

    Punkt operator+(const Punkt& p) const {
        return Punkt(x + p.x, y + p.y);
    }

    void wypisz() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};


int main() {
    Punkt p1(2.0, 3.0);
    Punkt p2(4.0, 5.0);

    Punkt p3 = p1 + p2;

    cout << "p1: "; p1.wypisz();
    cout << "p2: "; p2.wypisz();
    cout << "p1 + p2 = "; p3.wypisz();

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}

