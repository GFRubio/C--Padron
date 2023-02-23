/*
 * gestorlugarnacimiento.cpp
 *
 *  Created on: 25/4/2018
 *      Author: guille
 */

#include "gestorlugarnacimiento.h"

gestorlugarnacimiento::gestorlugarnacimiento() {

	L = new ListaPI<LugarNacimiento *>();

}

void gestorlugarnacimiento::insfinal(LugarNacimiento *N) {

	L->moverFinal();
	L->insertar(N);

}

bool gestorlugarnacimiento::buscar(LugarNacimiento *N, LugarNacimiento *& NA) {

	L->moverInicio();
	while (!L->finLista()) {
		L->consultar(NA);
		if (*NA == *N) {
			return true;
		} else
			L->avanzar();
	}
	return false;
}

void gestorlugarnacimiento::mostrar() {

	LugarNacimiento *N;

	cout << endl << "Provincia                Ciudad                 "
			"Numero de Personas" << endl;

	L->moverInicio();
	while (!L->finLista()) {
		L->consultar(N);
		N->mostrar();
		L->avanzar();
	}

}

gestorlugarnacimiento::~gestorlugarnacimiento() {
	// TODO Auto-generated destructor stub
}

