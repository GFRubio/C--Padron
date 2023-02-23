/*
 * Barrio.cpp
 *
 *  Created on: 20/2/2018
 *      Author: guille
 */

#include "Barrio.h"

Barrio::Barrio() {

	nombreBarrio = "";
	nombreDistrito = "";

	//cout << "iniciando constructor por defecto" << endl;
}

Barrio::Barrio(string nombreBarrio, string perteneceADistrito) {

	this->nombreBarrio = nombreBarrio;
	nombreDistrito = perteneceADistrito;
	//cout << "Iniciando constructor parametrizado" << endl; //
}

Barrio::Barrio(const Barrio &b){

	this ->nombreBarrio = b.nombreBarrio;
	this ->nombreDistrito = b.nombreDistrito;
}

Barrio::~Barrio() {


}

void Barrio::mostrar() {

	cout << "     " << getNombreBarrio() << "                    "
			<< getNombreDistrito() << endl;

}

	bool Barrio::operator == (const Barrio& b){
		return (nombreBarrio == b.nombreBarrio);


}
