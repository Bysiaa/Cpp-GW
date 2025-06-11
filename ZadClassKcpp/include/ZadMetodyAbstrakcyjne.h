#ifndef FIGURY_H
#define FIGURY_H

#include <iostream>
#include <cmath>
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
    double Pole() override { return bok * bok; }
    double Obwod() override { return 4 * bok; }
    void Narysuj() override { cout << "Kwadrat o boku " << bok << endl; }
};

class Prostokat : public Figura {
    double a, b;
public:
    Prostokat(double x, double y) : a(x), b(y) {}
    double Pole() override { return a * b; }
    double Obwod() override { return 2 * (a + b); }
    void Narysuj() override { cout << "Prostokat o bokach " << a << " i " << b << endl; }
};

class Trojkat : public Figura {
    double a, b, c;
public:
    Trojkat(double x, double y, double z) : a(x), b(y), c(z) {}
    double Pole() override {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    double Obwod() override { return a + b + c; }
    void Narysuj() override { cout << "Trojkat o bokach " << a << ", " << b << ", " << c << endl; }
};

class Kolo : public Figura {
    double promien;
public:
    Kolo(double r) : promien(r) {}
    double Pole() override { return 3.14 * promien * promien; }
    double Obwod() override { return 2 * 3.14 * promien; }
    void Narysuj() override { cout << "Kolo o promieniu " << promien << endl; }
    double Dystans(double m2_na_osobe) { return sqrt(m2_na_osobe / 3.14); }
};

#endif
