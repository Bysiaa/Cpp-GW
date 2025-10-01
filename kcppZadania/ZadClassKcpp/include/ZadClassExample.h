#ifndef ZADCLASSEXAMPLE_H
#define ZADCLASSEXAMPLE_H

#include "ZadKcpp.h"
#include <string>
using namespace std;

class Samochod {
    string Marka;
    string Model;
    int Rok;
public:
    Samochod();
    ~Samochod();

    void SetMarka(const string& m);
    void SetModel(const string& m);
    void SetRok(int r);

    string GetMarka() const;
    string GetModel() const;
    int GetRok() const;

    void Print() const;
};

class ZadClassExample : public ZadKcpp {
public:
    void wykonaj() override;
};

#endif
