#ifndef ZADARYTMETYKAWSKAZNIKOWROZNICA_H
#define ZADARYTMETYKAWSKAZNIKOWROZNICA_H

#include "ZadKcpp.h"

void przesun(int* tab, int rozmiar);

class ZadArytmetykaWskaznikowRoznica : public ZadKcpp {
public:
    void wykonaj() override;
};

#endif
