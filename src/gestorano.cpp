/*
 * gestorano.cpp
 *
 *  Created on: 25/4/2018
 *      Author: guille
 */

#include "gestorano.h"

gestorano::gestorano() {

	L = new ListaPI<Nacimiento *>();

}

void gestorano::insfinal(Nacimiento *N) {

	L->moverFinal();
	L->insertar(N);

}

bool gestorano::buscar(Nacimiento *N, Nacimiento *&NA) {

	L->moverInicio();
	while (!L->finLista()) {
		L->consultar(N);
		if (*N == *NA) {
			return true;
		} else
			L->avanzar();
	}
	return false;
}

void gestorano::mostrar() {

	Nacimiento * N;
	cout << endl << "Año de nacimiento        Numero de personas" << endl;
	L->moverInicio();
	while (!L->finLista()) {
		L->consultar(N);
		N->mostrar();
		L->avanzar();
	}
}

int gestorano::edadpersonas(int n) {

	Nacimiento * N;

	int inferior = 0;
	int superior = 0;
	int cont = 0;
	inferior = n * 10;
	superior = inferior + 9;

	L->moverInicio();
	while (!L->finLista()) {
		L->consultar(N);
		if ((2018 - N->getAno()) >= inferior &&  (2018 - N->getAno()) <= superior) {
			cont=cont+N->getNumpersonas();
			L->avanzar();
		} else
			L->avanzar();
	}
	return cont;
}


gestorano::~gestorano() {

	delete L;

}

