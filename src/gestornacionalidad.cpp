/*
 * gestornacionalidad.cpp
 *
 *  Created on: 25/4/2018
 *      Author: guille
 */

#include "gestornacionalidad.h"

gestornacionalidad::gestornacionalidad() {

	L = new ListaPI<Nacionalidad *>();

}

void gestornacionalidad::insfinal(Nacionalidad* N) {

	L->moverFinal();
	L->insertar(N);

}

bool gestornacionalidad::buscar(Nacionalidad* N, Nacionalidad *& NA) {

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

void gestornacionalidad::mostrar() {

	Nacionalidad *N;
	cout << endl << "Pais                Numero de Personas" << endl;
	L->moverInicio();
	while (!L->finLista()) {
		L->consultar(N);
		N->mostrar();
		L->avanzar();
	}
}

void gestornacionalidad::insorden(Nacionalidad *N) {

	Nacionalidad *NA;
	bool enc = false;

	L->moverInicio();
	while (!L->finLista() && !enc) {
		L->consultar(N);
		if (N->getNumpersonas() > NA->getNumpersonas()) {
			enc = true;

		} else
			L->avanzar();

	}
	L->insertar(N);

}

void gestornacionalidad::ordenar(gestornacionalidad *&GN){

	Nacionalidad *N;
	GN = new gestornacionalidad();
	L->moverInicio();
	while (! L->finLista()){
		L->consultar(N);
		GN->insorden(N);
		L->avanzar();
	}

}

void gestornacionalidad::pasarinfo(gestornacionalidad *& GN){

	Nacionalidad *N, *NE;

	L->moverInicio();
	while (! L->finLista()){
		L->consultar(N);
		if (GN->buscar(N, NE)){
			NE->setNumpersonas(NE->getNumpersonas() + N->getNumpersonas());
		}else
			L->insertar(NE);
	}L->avanzar();

}


gestornacionalidad::~gestornacionalidad() {

	delete L;

}

/*
 * Realizar un algoritmo que muestre un listado con todas las nacionalidades de los
 habitantes de cáceres (junto con el número de ciudadanos de cada nacionalidad)
 ordenados de forma descendente por número de habitantes.
 *
 *
 */
