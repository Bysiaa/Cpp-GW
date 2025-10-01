/*
Zadanie 4.1
--------------------------------------
Napisz program z przykładami manipulacji strumieniem cout:
- setw, setprecision, setfill, fixed, scientific, hex, dec... etc (patrz plik kcpp02.pdf)
- nazwać program LManipulacjaStrumieniemCout.cc

  Spraw aby na ekran wypisało to co jest pomiedzy liniami ze znakami =:
  ==================================================
  Wynika naszego działania: x.xxxxx jest niepoprawny ale:
     output:   xx.xxx    T:  x.xxx
     output1:   x.xxxx   T: xx.xxxxx
     output2:   x.xxxx   T: xx.xxxxxx
     ---------------------------------
     average:  xx.xxxx   T: xx.xxxxxx
  ==================================================
  - x.xxxx są wynikami jakiś działań, a nie sztucznie wstawionymi liczbami
  - ustawienie liczb/wypisanie/sformatowanie wykonać używając manipulatorow strumieniem (setw, setprecision, setfill etc), zamiast " " czy \t
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double output = 12.4564;
    double output1 = 1.54623;
    double output2 = 0.987654;
    double average = (output + output1 + output2) / 3.0;

    cout << "==================================================\n";
    cout << "Wynik naszego działania: x.xxxxx jest niepoprawny ale:\n";

    cout << "   output:  "
        << setw(7) << fixed << setprecision(3) << output
        << "   T: " << setw(8) << setprecision(3) << output << endl;

    cout << "   output1: "
        << setw(7) << fixed << setprecision(4) << output1
        << "   T: " << setw(9) << setprecision(5) << output1 << endl;

    cout << "   output2: "
        << setw(7) << fixed << setprecision(4) << output2
        << "   T: " << setw(10) << setprecision(6) << output2 << endl;

    cout << "   ---------------------------------\n";

    cout << "   average: "
        << setw(8) << fixed << setprecision(4) << average
        << "   T: " << setw(10) << setprecision(6) << average << endl;

    cout << "==================================================\n";

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.get();

    return 0;
}
