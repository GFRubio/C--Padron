/*
 * Nacimiento.cpp
 *
 *  Created on: 24/4/2018
 *      Author: guille
 */

#include "AnoNacimiento.h"

Nacimiento::Nacimiento() {

	ano = 0;
	numpersonas = 0;

}

Nacimiento::Nacimiento(int ano, int numpersonas) {

     	this->ano = ano;
     	this->numpersonas = numpersonas;

}

Nacimiento::Nacimiento(const Nacimiento & N) {

	this->ano = N.ano;
	this->numpersonas = N.numpersonas;

}

int Nacimiento::getAno() {
	return ano;
}

void Nacimiento::setAno(int ano) {
	this->ano = ano;
}

int Nacimiento::getNumpersonas() {
	return numpersonas;
}

void Nacimiento::setNumpersonas(int numpersonas) {
	this->numpersonas = numpersonas;
}

void Nacimiento::mostrar(){

   cout << "    " << ano << "    " << numpersonas << endl;

}

bool Nacimiento::operator == (const Nacimiento & N){

	return (ano == N.ano && numpersonas == N.numpersonas);

}

Nacimiento::~Nacimiento() {
	// TODO Auto-generated destructor stub
}

