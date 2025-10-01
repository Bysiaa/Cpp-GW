#ifndef ZADARYTMETYKAWSKAZNIKOWZNAJDOWANIE_H
#define ZADARYTMETYKAWSKAZNIKOWZNAJDOWANIE_H

#include "ZadKcpp.h"

class ZadArytmetykaWskaznikowZnajdowanie : public ZadKcpp {
public:
    void wykonaj() override;

private:
    int* maxElement(int* tab, int rozmiar);
};

#endif
