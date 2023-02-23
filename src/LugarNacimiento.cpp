/*
 * LugarNacimiento.cpp
 *
 *  Created on: 24/4/2018
 *      Author: guille
 */

#include "LugarNacimiento.h"

LugarNacimiento::LugarNacimiento() {

	provincia = "";
	ciudad = "";
	numpersonas = 0;

}

LugarNacimiento::LugarNacimiento(string provincia, string ciudad, int numpersonas){

	this->provincia = provincia;
	this->ciudad = ciudad;
	this->numpersonas = numpersonas;

}

LugarNacimiento::LugarNacimiento(const LugarNacimiento & N) {

	this->provincia = N.provincia;
	this->ciudad= N.ciudad;
	this->numpersonas = N.numpersonas;


}

string LugarNacimiento::getCiudad() {
	return ciudad;
}

void LugarNacimiento::setCiudad(string& ciudad) {
	this->ciudad = ciudad;
}

int LugarNacimiento::getNumpersonas(){
	return numpersonas;
}

void LugarNacimiento::setNumpersonas(int numpersonas) {
	this->numpersonas = numpersonas;
}

string LugarNacimiento::getProvincia(){
	return provincia;
}

void LugarNacimiento::setProvincia(string& provincia) {
	this->provincia = provincia;
}

void LugarNacimiento::mostrar(){

	cout << "   " << provincia << "  " << ciudad << "   " << numpersonas
			<<  endl;

}

bool LugarNacimiento::operator == (const LugarNacimiento & N){

 return (provincia == N.provincia && ciudad == N.ciudad);

}

LugarNacimiento::~LugarNacimiento() {
	// TODO Auto-generated destructor stub
}

