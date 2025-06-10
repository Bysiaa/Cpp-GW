/*
Zadanie 1.0
Napisać krótki program oparty na pliku LTypeEnumerated.cc, zawierający przykład 
użycia typu enum (scoped lub unscoped, z miesiącami)
- nazwać program: ZadEnumExample.cc
*/

#include <iostream>
using namespace std;

enum miesiace {
    styczen = 1,
    luty = 2,
    marzec = 3,
    kwiecien = 4,
    maj = 5,
    czerwiec = 6,
    lipiec = 7,
    sierpien = 8,
    wrzesien = 9,
    pazdziernik = 10,
    listopad = 11,
    grudzien = 12
};

int main()
{
    miesiace aktualnyMsc = marzec;
    std::cout<<"Mamy teraz miesiac " << aktualnyMsc << " czyli... ";
    
    switch(aktualnyMsc) {
        case styczen:
            std::cout << "styczeń!!!" << endl;
            break;
        case luty:
            std::cout << "luty!!!" << endl;
            break;
        case marzec:
            std::cout << "marzec!!!" << endl;
            break;
        case kwiecien:
            std::cout << "kwiecien!!!" << endl;
            break;
        case maj:
            std::cout << "maj!!!" << endl;
            break;
        case czerwiec:
            std::cout << "czerwiec!!!" << endl;
            break;
        case lipiec:
            std::cout << "lipiec!!!" << endl;
            break;
        case sierpien:
            std::cout << "sierpien!!!" << endl;
            break;
        case wrzesien:
            std::cout << "wrzesien!!!" << endl;
            break;
        case pazdziernik:
            std::cout << "pazdziernik!!!" << endl;
            break;
        case listopad:
            std::cout << "listopad!!!" << endl;
            break;
        case grudzien:
            std::cout << "grudzien!!!" << endl;
            break;
    }

    return 0;
}