/*
 * Circulo.h
 *
 *  Created on: 14 oct 2026
 *      Author: rodri
 */

#ifndef CIRCULO_H
#define CIRCULO_H

#include <cmath>

template <typename T>
class Circulo {
protected:
    T radio;

public:
    Circulo(T r) {
        radio = r;
    }

    T area() {
        return (M_PI * radio * radio);
    }

    T perimetro() {
        return (2.0 * M_PI * radio);
    }
};

#endif // CIRCULO_H
