/*
 * gestorano.h
 *
 *  Created on: 25/4/2018
 *      Author: guille
 */

#ifndef GESTORANO_H_
#define GESTORANO_H_
#include <iostream>
#include "AnoNacimiento.h"
#include "listapi.h"
using namespace std;

class gestorano {

	ListaPI<Nacimiento *> * L;

public:
	gestorano();
	void insfinal(Nacimiento *N);
	bool buscar (Nacimiento *N, Nacimiento *&NA);
	void mostrar();
	int edadpersonas(int edad);
	~gestorano();
};


/*
 * insfinal
 * buscar
 * mostrar
 */

#endif /* GESTORANO_H_ */
