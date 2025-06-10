#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int liczba = 255;
    double pi = 3.1415926535;

    cout << "== Formatowanie liczb całkowitych ==" << endl;
    cout << "DEC: " << dec << liczba << endl;
    cout << "HEX: " << hex << liczba << endl;
    cout << "OCT: " << oct << liczba << endl;

    cout << "== Ustawianie szerokosci i wypelnienia ==" << endl;
    cout << "Bez setw: [" << liczba << "]" << endl;
    cout << "Z setw(10): [" << setw(10) << liczba << "]" << endl;
    cout << "Z setw(10), setfill('*'): [" << setfill('*') << setw(10) << liczba << "]" << endl;

    cout << "== Formatowanie liczb zmiennoprzecinkowych ==" << endl;
    cout << "Domyslnie: " << pi << endl;
    cout << "Fixed (stała liczba miejsc po przecinku): " << fixed << pi << endl;
    cout << "Scientific (notacja naukowa): " << scientific << pi << endl;

    cout << "== Precyzja liczby zmiennoprzecinkowej ==" << endl;
    cout << setprecision(3) << "setprecision(3): " << pi << endl;
    cout << setprecision(6) << "setprecision(6): " << pi << endl;

    cout.unsetf(ios::fixed | ios::scientific);

    cout << "== Polaczenie kilku manipulacji ==" << endl;
    cout << setfill('.') << setw(12) << "Wartosc: " << fixed << setprecision(2) << pi << endl;

    return 0;
}
