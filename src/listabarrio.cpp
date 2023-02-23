/*
 * listabarrio.cpp
 *
 *  Created on: 4/4/2018
 *      Author: guille
 */

#include "listabarrio.h"

listabarrio::listabarrio() {

	L = new ListaPI<Barrio *>();
	cout << "Iniciando constructor por defecto" << endl;

}

void listabarrio::insertarorden(Barrio *B) {

	bool enc = false;
	Barrio* ba;
	L->moverInicio();
	while (!L->finLista() && !enc) {
		L->consultar(ba);
		if (ba->getNombreBarrio() > B->getNombreBarrio()) {
			enc = true;
		} else
			L->avanzar();

	}
	L->insertar(B);

}

bool listabarrio::buscar(Barrio *B, Barrio* &ba) {

	L->moverInicio();
	while (!L->finLista()) {
		L->consultar(ba);
		if (*ba == *B) {
			return true;
		} else
			L->avanzar();
	}
	return false;

}

void listabarrio::mostrar() {
	Barrio * B;
	cout << endl << "Nombre del barrio           Nombre del distrito" << endl << endl;
	L->moverInicio();
	while (!L->finLista()) {
		L->consultar(B);
		B->mostrar();
		L->avanzar();
	}

}

void listabarrio::moverlistainicio(){

	L->moverInicio();

}

bool listabarrio::esfinlista(){

	if ( L->finLista()){

		return true;
	}else
		return false;

}

void listabarrio::consultarbarrio(Barrio * &B){

	L->consultar(B);

}

void listabarrio::avanzarPI(){

	if (! L->finLista())
	L->avanzar();

}

listabarrio::~listabarrio() {

	delete L;

}

