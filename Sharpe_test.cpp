/*
 * Sharpe_test.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: rodri
 */


#include <gtest/gtest.h>
#include "Sharpe.h"
#include "Rectangulo.h"
#include "Circulo.h"


TEST(Rectangulo, test1) {

	Rectangulo rect(4.0f, 5.0f);

    ASSERT_EQ(rect.area(), 18.0f);
    ASSERT_EQ(rect.perimetro(), 20.0f);
}


TEST(Rectangulo, test2) {

	Rectangulo rect(3.0f, 6.0f);
    Sharpe* psharpe = &rect;

    ASSERT_EQ(psharpe->area(), 18.0f);
    ASSERT_EQ(psharpe->perimetro(), 18.0f);
}
TEST(Circulo, test3){

	Circulo <double> circ(2);

	ASSERT_EQ(circ.area(), 4*M_PI);
	ASSERT_EQ(circ.perimetro(), 4*M_PI );

}
