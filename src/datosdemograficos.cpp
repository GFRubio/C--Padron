/*
 * datosdemograficos.cpp
 *
 *  Created on: 25/4/2018
 *      Author: guille
 */

#include "datosdemograficos.h"

datosdemograficos::datosdemograficos() {

	A = new gestorano();
	E = new gestorestudios();
	LN = new gestorlugarnacimiento();
	N = new gestornacionalidad();

}

datosdemograficos::datosdemograficos(gestorano *A, gestorestudios *E,
		gestorlugarnacimiento *LN, gestornacionalidad * N){

	this->A = A;
	this->E = E;
	this->LN = LN;
	this->N = N;

}

datosdemograficos::datosdemograficos(const datosdemograficos & D){

	this-> A = D.A;
	this-> E = D.E;
	this-> LN = D.LN;
	this-> N = D.N;

}

gestorano*& datosdemograficos::getA() {
	return A;
}

void datosdemograficos::setA(gestorano*& a) {
	A = a;
}

gestorestudios*& datosdemograficos::getE() {
	return E;
}

void datosdemograficos::setE(gestorestudios*& e) {
	E = e;
}

gestorlugarnacimiento*& datosdemograficos::getLn() {
	return LN;
}

void datosdemograficos::setLn(gestorlugarnacimiento*& ln) {
	LN = ln;
}

gestornacionalidad*& datosdemograficos::getN() {
	return N;
}

void datosdemograficos::setN(gestornacionalidad*& n) {
	N = n;
}

void datosdemograficos::mostrar(){

	if ( A != NULL)
		A->mostrar();

	if (E != NULL)
		E->mostrar();

	if (LN != NULL)
		LN->mostrar();

	if (N != NULL)
		N->mostrar();
}

void datosdemograficos::insertarano(Nacimiento *N){


 A->insfinal(N);


}

void datosdemograficos::insertarestudio(Estudios *EN){

	E->insorden(EN);

}


void datosdemograficos::insertarlugarnacimiento(LugarNacimiento *N){


	LN->insfinal(N);


}

void datosdemograficos::insertarnacionalidad(Nacionalidad *NA){


N->insfinal(NA);

}

int datosdemograficos::edad( int n){ //

return A->edadpersonas(n);


}

void datosdemograficos::estudiosporpersonas(gestorestudios *&GE){

	if (E != NULL)
	E->recorrer(GE);

}

void datosdemograficos::nacionalidadorden(gestornacionalidad *&GN){

if (N !=NULL)
	N->pasarinfo(GN);
}

datosdemograficos::~datosdemograficos() {
// TODO Auto-generated destructor stub
}

/*

 *
 */
