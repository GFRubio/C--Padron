/*
 * Nacionalidad.cpp
 *
 *  Created on: 24/4/2018
 *      Author: guille
 */

#include "Nacionalidad.h"

Nacionalidad::Nacionalidad() {

	pais = "";
	numpersonas = 0;

}

Nacionalidad::Nacionalidad(string pais, int numpersonas) {

	this->pais = pais;
	this->numpersonas = numpersonas;

	// Iniciando constructor parametrizado
}

Nacionalidad::Nacionalidad(const Nacionalidad & N) {

	this->pais = N.pais;
	this->numpersonas = N.numpersonas;

	// iniciando constructor por defecto
}

int Nacionalidad::getNumpersonas() {
	return numpersonas;
}

void Nacionalidad::setNumpersonas(int numpersonas) {
	this->numpersonas = numpersonas;
}

string Nacionalidad::getPais() {
	return pais;
}

void Nacionalidad::setPais(string& pais) {
	this->pais = pais;
}

void Nacionalidad::mostrar() {

	cout << "     " << getPais() << "       " << getNumpersonas() << endl;

}

bool Nacionalidad::operator ==(const Nacionalidad &N) {

	return (pais == N.pais);

}
Nacionalidad::~Nacionalidad() {
	// TODO Auto-generated destructor stub
}

