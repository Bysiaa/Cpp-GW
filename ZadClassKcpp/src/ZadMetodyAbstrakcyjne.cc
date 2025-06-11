#include <iostream>
#include <cmath>
#include "ZadMetodyAbstrakcyjne.h"
using namespace std;

class Figura {
public:
    virtual double Pole() = 0;
    virtual double Obwod() = 0;
    virtual void Narysuj() = 0;
    virtual ~Figura() {}
};

class Kwadrat : public Figura {
    double bok;
public:
    Kwadrat(double b) : bok(b) {}
    double Pole() override {
        return bok * bok;
    }
    double Obwod() override {
        return 4 * bok;
    }
    void Narysuj() override {
        cout << "Kwadrat o boku " << bok << endl;
    }
};

class Prostokat : public Figura {
    double a, b;
public:
    Prostokat(double x, double y) : a(x), b(y) {}
    double Pole() override {
        return a * b;
    }
    double Obwod() override {
        return 2 * (a + b);
    }
    void Narysuj() override {
        cout << "Prostokat o bokach " << a << " i " << b << endl;
    }
};

class Trojkat : public Figura {
    double a, b, c;
public:
    Trojkat(double x, double y, double z) : a(x), b(y), c(z) {}
    double Pole() override {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    double Obwod() override {
        return a + b + c;
    }
    void Narysuj() override {
        cout << "Trojkat o bokach " << a << ", " << b << ", " << c << endl;
    }
};

class Kolo : public Figura {
    double promien;
public:
    Kolo(double r) : promien(r) {}
    double Pole() override {
        return 3.14 * promien * promien;
    }
    double Obwod() override {
        return 2 * 3.14 * promien;
    }
    void Narysuj() override {
        cout << "Kolo o promieniu " << promien << endl;
    }

    double Dystans(double m2_na_osobe) {
        return sqrt(m2_na_osobe / 3.14);
    }
};

int main() {
    Figura* figury[4];
    figury[0] = new Kwadrat(5);
    figury[1] = new Prostokat(3, 4);
    figury[2] = new Trojkat(3, 4, 5);
    figury[3] = new Kolo(2.5);

    for (int i = 0; i < 4; i++) {
        figury[i]->Narysuj();
        cout << "Pole: " << figury[i]->Pole() << endl;
        cout << "Obwod: " << figury[i]->Obwod() << endl << endl;
    }

    Kolo* k = dynamic_cast<Kolo*>(figury[3]);
    if (k) {
        double dystans = k->Dystans(4.0);
        cout << "Dystans (promien) dla 4 m2/osobe: " << dystans << " m" << endl;
    }

    for (int i = 0; i < 4; i++) {
        delete figury[i];
    }

    return 0;
}
