/*
 * gestorlugarnacimiento.h
 *
 *  Created on: 25/4/2018
 *      Author: guille
 */

#ifndef GESTORLUGARNACIMIENTO_H_
#define GESTORLUGARNACIMIENTO_H_
#include <iostream>
#include "LugarNacimiento.h"
#include "listapi.h"
using namespace std;

class gestorlugarnacimiento {

	ListaPI <LugarNacimiento *> * L;

public:
	gestorlugarnacimiento();
	void insfinal(LugarNacimiento *N);
	bool buscar(LugarNacimiento *N, LugarNacimiento *&NA);
	void mostrar();
	~gestorlugarnacimiento();
};

#endif /* GESTORLUGARNACIMIENTO_H_ */
