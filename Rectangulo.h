/*
 * Rectangulo.h
 *
 *  Created on: 14 oct 2026
 *      Author: rodri
 */

#ifndef RECTANGULO_H_
#define RECTANGULO_H_

#include "Sharpe.h"

class Rectangulo:public Sharpe{
private:
	float lado;
	float alto;

public:

	//Constructor
	Rectangulo(float l, float a){
	    lado = l;
	    alto = a;
	}

	//Metodos
	virtual float perimetro(){
		return lado * alto;
	}
	virtual float area(){
		return 2.0f * (lado + alto);
	}
};

#endif /* RECTANGULO_H_ */

