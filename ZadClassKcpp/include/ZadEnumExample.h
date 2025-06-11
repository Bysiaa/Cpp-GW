#ifndef ZAD_ENUM_EXAMPLE_H
#define ZAD_ENUM_EXAMPLE_H

// Deklaracja typu enum i funkcji do wypisania miesiąca
enum miesiace {
    styczen = 1,
    luty,
    marzec,
    kwiecien,
    maj,
    czerwiec,
    lipiec,
    sierpien,
    wrzesien,
    pazdziernik,
    listopad,
    grudzien
};

// Funkcja pomocnicza do wypisywania nazwy miesiąca
void wypiszMiesiac(miesiace m);

#endif // ZAD_ENUM_EXAMPLE_H
