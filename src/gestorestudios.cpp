/*
 * gestorestudios.cpp
 *
 *  Created on: 25/4/2018
 *      Author: guille
 */

#include "gestorestudios.h"

gestorestudios::gestorestudios() {

	L = new ListaPI<Estudios *>();

}

void gestorestudios::insorden(Estudios *E) {

	Estudios *EA;
	bool enc = false;

	L->moverInicio();
	while (!L->finLista() && !enc) {
		L->consultar(EA);
		if (EA->getTitulacion() > E->getTitulacion()) {
			enc = true;
		} else
			L->avanzar();
	}
	L->insertar(E);
}
bool gestorestudios::buscar(Estudios *E, Estudios *& EA) {

	L->moverInicio();
	while (!L->finLista()) {
		L->consultar(EA);
		if (*EA == *E) {
			return true;
		} else

			L->avanzar();
	}
	return false;
}

void gestorestudios::mostrar() {

	Estudios *E;
	cout << endl << "Titulacion                      Numero de Personas"
			<< endl;
	L->moverInicio();
	while (!L->finLista()) {
		L->consultar(E);
		E->mostrar();
		L->avanzar();
	}
}

void gestorestudios::insordennum(Estudios *E) {

	Estudios *PE;
	bool enc = false;

	L->moverInicio();
	while (!L->finLista() && !enc) {
		L->consultar(PE);
		if (PE->getNumpersonas() > E->getNumpersonas()) {
			enc = true;

		} else
			L->avanzar();

	}
	L->insertar(E);

}

void gestorestudios::ordenar(gestorestudios *&GE) {
	Estudios *E;
	GE=new gestorestudios();
	L->moverInicio();
	while (!L->finLista()) {
		L->consultar(E);
		GE->insordennum(E);
		L->avanzar();
	}

}

void gestorestudios::recorrer(gestorestudios* &GE) {
	Estudios *E, *PE;
	L->moverInicio();
	while (!L->finLista()) {
		L->consultar(E);
		if (GE->buscar(E, PE)) {
			PE->setNumpersonas(PE->getNumpersonas() + E->getNumpersonas());
		} else
			GE->insordennum(E);
		L->avanzar();
	}
}

void gestorestudios::listafichero() {

	ofstream fSal;
	string info;
	Estudios *E;

	fSal.open("Infoestudios.csv");
	if (!fSal.is_open()) {
		cout << "error al abrir el fichero" << endl;
	} else
		L->moverInicio();
		while (! L->finLista()){
			L->consultar(E);
			fSal << E->getTitulacion() << "#"<<E->getNumpersonas() << endl;
			L->avanzar();
		}
		fSal.close();

}

gestorestudios::~gestorestudios() {
	// TODO Auto-generated destructor stub
}

/*
 * insertar en orden por el numero
 * ordenar utilizando ese insertar (el numero)
 * recorrer la lista estudios y nos devuelve 1 lista estudios
 * si esta se modifica y si no se inserta
 */
