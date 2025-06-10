#include <iostream>
using namespace std;

int zwrocPrzezWartosc() {
    int a = 1;
    return 1;
}

int& zwrocPrzezReferencje(int& ref) {
    return ref;
}

int* zwrocPrzezWskaznik(int* wsk) {
    return wsk;
}

int* zwrocTablice() {
    static int tablica[5] = { 1, 2, 3, 4, 5 };
    return tablica;
}

int main() {
    int wartosc = zwrocPrzezWartosc();
    cout << "Zwrocono przez wartosc: " << wartosc << endl;

    int x = 7;
    int& ref = zwrocPrzezReferencje(x);
    ref = 14;
    cout << "Zmieniona przez referencje: " << x << endl;

    int y = 21;
    int* wsk = zwrocPrzezWskaznik(&y);

    *wsk = 28;
    cout << "Zmieniona przez wskaznik: " << y << endl;

    int* tab = zwrocTablice();
    cout << "Zwrocona tablica: ";
    for (int i = 0; i < 5; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}
