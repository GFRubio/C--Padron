/*
 * Estudios.cpp
 *
 *  Created on: 24/4/2018
 *      Author: guille
 */

#include "Estudios.h"

Estudios::Estudios() {

	titulacion = "";
	numpersonas = 0;

}

Estudios::Estudios(string titulacion, int numpersonas){

	this -> titulacion = titulacion;
	this -> numpersonas = numpersonas;

}

Estudios::Estudios(const Estudios& E){

	this-> titulacion = E.titulacion;
	this -> numpersonas = E.numpersonas;

}

int Estudios::getNumpersonas() {
	return numpersonas;
}

void Estudios::setNumpersonas(int numpersonas) {
	this->numpersonas = numpersonas;
}

string Estudios::getTitulacion() {
	return titulacion;
}

void Estudios::setTitulacion(string& titulacion) {
	this->titulacion = titulacion;
}

void Estudios::mostrar(){

	cout << "      " << getTitulacion() << "        " << getNumpersonas()
			<< endl;

}

bool Estudios::operator == (const Estudios & E){

	return (titulacion == E.titulacion);

}

Estudios::~Estudios() {
	// TODO Auto-generated destructor stub
}

