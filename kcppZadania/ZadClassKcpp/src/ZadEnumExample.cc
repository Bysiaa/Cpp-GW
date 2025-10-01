#include "ZadEnumExample.h"

enum miesiace {
    styczen = 1, luty, marzec, kwiecien, maj, czerwiec,
    lipiec, sierpien, wrzesien, pazdziernik, listopad, grudzien
};

void ZadEnumExample::wykonaj() {
    miesiace aktualnyMsc = marzec;
    std::cout << "Mamy teraz miesiac " << aktualnyMsc << " czyli... ";

    switch(aktualnyMsc) {
        case styczen: std::cout << "styczen\n"; break;
        case luty: std::cout << "luty\n"; break;
        case marzec: std::cout << "marzec\n"; break;
        case kwiecien: std::cout << "kwiecien\n"; break;
        case maj: std::cout << "maj\n"; break;
        case czerwiec: std::cout << "czerwiec\n"; break;
        case lipiec: std::cout << "lipiec\n"; break;
        case sierpien: std::cout << "sierpien\n"; break;
        case wrzesien: std::cout << "wrzesien\n"; break;
        case pazdziernik: std::cout << "pazdziernik\n"; break;
        case listopad: std::cout << "listopad\n"; break;
        case grudzien: std::cout << "grudzien\n"; break;
    }
}
