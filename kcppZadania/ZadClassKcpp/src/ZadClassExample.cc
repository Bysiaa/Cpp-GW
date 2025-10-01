#include "ZadClassExample.h"
#include <iostream>
using namespace std;

Samochod::Samochod() : Marka("Brak"), Model("Brak"), Rok(0) {
    cout << "Obiekt Samochod stworzony." << endl;
}

Samochod::~Samochod() {
    cout << "Obiekt Samochod zniszczony." << endl;
}

void Samochod::SetMarka(const string& m) { Marka = m; }
void Samochod::SetModel(const string& m) { Model = m; }
void Samochod::SetRok(int r) { Rok = r; }

string Samochod::GetMarka() const { return Marka; }
string Samochod::GetModel() const { return Model; }
int Samochod::GetRok() const { return Rok; }

void Samochod::Print() const {
    cout << "-------------------------" << endl;
    cout << "Marka: " << Marka << endl;
    cout << "Model: " << Model << endl;
    cout << "Rok: " << Rok << endl;
    cout << "-------------------------" << endl;
}

void ZadClassExample::wykonaj() {
    Samochod s1;
    s1.Print();

    s1.SetMarka("Toyota");
    s1.SetModel("Corolla");
    s1.SetRok(2020);

    cout << "\nPo zmianie danych:" << endl;
    s1.Print();
}
