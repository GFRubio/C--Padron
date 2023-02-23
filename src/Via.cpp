/*
 * Via.cpp
 *
 *  Created on: 20/2/2018
 *      Author: guille
 */

#include "Via.h"

Via::Via() {

	nombreVia = "";
	lVias = 0;
	tipoVia = "";
	codigoVia = 0;
	barriovia = NULL;
	DD = new datosdemograficos();
	cout << "Generando constructor por defecto" << endl;

}

Via::Via(string nombreVia, float longitudVia, string tipoVia, int codigoVia,
		Barrio *barriovia, datosdemograficos * DD) {

	this->nombreVia = nombreVia;
	this->lVias = lVias;
	this->tipoVia = tipoVia;
	this->codigoVia = codigoVia;
	this->barriovia = barriovia;
	this-> DD = DD;

}

Via::Via(const Via &v) {

	this->nombreVia = v.nombreVia;
	this->lVias = v.lVias;
	this->tipoVia = v.tipoVia;
	this->codigoVia = v.codigoVia;
	this->barriovia = v.barriovia;
	this-> DD = v.DD;

	//this->barriovia = new Barrio(v.barriovia->getNombreBarrio(), v.barriovia->getNombreDistrito());
	cout << "Generando constructor por copia" << endl;

}

Barrio* Via::getBarriovia() {
	return barriovia;
}

void Via::setCodigoVia(int codigoVia) {
	this->codigoVia = codigoVia;
}

float Via::getVias() {
	return lVias;
}

void Via::setVias(float vias) {
	lVias = vias;
}

int Via::getCodigoVia(){
	return codigoVia;
}



string Via::getNombreVia() {
	return nombreVia;
}

void Via::setNombreVia(string nombreVia) {
	this->nombreVia = nombreVia;
}

string Via::getTipoVia(){
	return tipoVia;
}

datosdemograficos*& Via::getDd() {
	return DD;
}

void Via::setDd(datosdemograficos*& dd) {
	DD = dd;
}

void Via::setTipoVia(string tipoVia) {
	this->tipoVia = tipoVia;
}

void Via::setBarriovia(Barrio*& barriovia) {
	this->barriovia = barriovia;
}

Via::~Via() {
	delete barriovia;
	delete DD;

}
void Via::mostrar() {

	cout << tipoVia << "     " << nombreVia << "     " << lVias << "     " << codigoVia << ""
			<< endl;

	if (barriovia != NULL) {
		barriovia->mostrar();
	}
	if (DD != NULL) {
		DD->mostrar();
	}

}

bool Via::operator ==(const Via&v) {

	return (nombreVia == v.nombreVia && tipoVia == tipoVia);

}

bool Via::operator >(const Via&v) {

	if (nombreVia > v.nombreVia)
		return true;
	else if (nombreVia == v.nombreVia && tipoVia > v.tipoVia)
		return true;
	else
		if (nombreVia == v.nombreVia && tipoVia == v.tipoVia
				&& barriovia->getNombreBarrio() > v.barriovia->getNombreBarrio())
			return true;
		else
			return false;

}

int Via::llamarpatron(int n){
	if (DD==NULL)
		return 0;
	return DD->edad(n);

}

void Via::estudioporpersonas(gestorestudios *& GE){

	if (DD != NULL)
	DD->estudiosporpersonas(GE);

}

void Via::nacionalidadordenada(gestornacionalidad * & GN){
	if (DD != NULL)
		DD->nacionalidadorden(GN);


}


/*
 * El == nombre y tipo
 * EL > primero por el nombre, pero si es igual por el tipo pero si
 * el tipo es igual por el nombre del barrio
 */
