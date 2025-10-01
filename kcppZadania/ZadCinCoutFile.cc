/*
Zadanie 4.2
--------------------------------------
Napisz program pokazujący funkcjonalność:
- wypisywania na ekran,
- +zapisywanie do strumienia błędów
//- zapisywania do pliku,
//- odczytywania z pliku,
- nazwać program: ZadCinCoutFile.cc
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int liczba;

    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;
    cout << "Twoja liczba: " << liczba << endl;


    ofstream plikWy("dane.txt");
    if (!plikWy) {
        cerr << "Blad przy otwieraniu pliku do zapisu!" << endl;
        return 1;
    }
    plikWy << liczba << endl;
    plikWy.close();


    ifstream plikWe("dane.txt");
    if (!plikWe) {
        cerr << "Blad przy otwieraniu pliku do odczytu!" << endl;
        return 1;
    }
    int odczytanaLiczba;
    plikWe >> odczytanaLiczba;
    plikWe.close();

    cout << "Odczytana liczba z pliku: " << odczytanaLiczba << endl;

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.ignore();
    cin.get();

    return 0;
}
