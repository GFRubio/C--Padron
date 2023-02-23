/*
 * ListaVias.cpp
 *
 *  Created on: 6/3/2018
 *      Author: guille
 */

#include "ListaVias.h"

ListaVias::ListaVias() {

	LV = new ListaPI<Via *>();

}

void ListaVias::insertar(Via*v) {

	bool enc = false;
	Via* va;
	LV->moverInicio();
	while (!LV->finLista() && !enc) {
		LV->consultar(va);
		if (va->getNombreVia() > v->getNombreVia()) {
			enc = true;
		} else
			LV->avanzar();

	}
	LV->insertar(v);

}

bool ListaVias::buscar(int nombre, Via *& v) {

	LV->moverInicio();
	while (!LV->finLista()) {
		LV->consultar(v);
		if (v->getCodigoVia() == nombre) {
			return true;
		} else
			LV->avanzar();
	}
	return false;
}
/*

 bool ListaVias::buscar(string nombre, Via*& v) {
 bool enc = false;
 int i = 0;

 while (i < cont && !enc) {
 if (lVias[i]->getNombreVia() == nombre) {
 enc = true;
 v = lVias[i];
 } else
 i++;
 }
 return enc;
 }

 void ListaVias::mostrar(){

 for (int i= 0; i < cont; i++)
 lVias[i]->mostrar();
 }
 */
void ListaVias::mostrar() {

	Via * V;
	cout << endl
			<< "Barrio de la Via          Nombre de la Via           Longitud de la Via      Tipo de Via      Codigo de la Via"
			<< endl << endl;
	LV->moverInicio();
	while (!LV->finLista()) {
		LV->consultar(V);
		V->mostrar();
		LV->avanzar();
	}

}

void ListaVias::mostrarviasdebarrio(string Bar) {

	Via * V;
	LV->moverInicio();
	while (!LV->finLista()) {
		LV->consultar(V);
		if (V->getBarriovia()->getNombreBarrio() == Bar) {
			V->mostrar();
			LV->avanzar();
		} else
			LV->avanzar();
	}
}

void ListaVias::viaDeVariosBarrios() {

	Via * V;
	Via * W;
	string nom;
	LV->moverInicio();
	while (!LV->finLista()) {
		LV->consultar(V);
		LV->avanzar();
		bool enc = false;
		while (!LV->finLista() && !enc) {
			LV->consultar(W);
			if (*V == *W) {
				V->mostrar();
			} else
				enc = true;
			LV->avanzar();
		}

	}
}

int ListaVias::recorreredades(string Bar, int n) {

	Via *V;
	int c = 0;

	LV->moverInicio();
	while (!LV->finLista()) {
		LV->consultar(V);
		if (V->getBarriovia()->getNombreBarrio() == Bar)
			c = c + V->llamarpatron(n);
		LV->avanzar();
	}
	return c;
}

void ListaVias::recorrerestudios(string Bar, gestorestudios *& GE) {

	Via *V;

	GE=new gestorestudios();
	LV->moverInicio();
	while (!LV->finLista()) {
		LV->consultar(V);
		if (V->getBarriovia()->getNombreBarrio() == Bar) {
		  V->estudioporpersonas(GE);
		}LV->avanzar();

	}
}

void ListaVias::recorrernacionalidad(gestornacionalidad *& GN){

	Via *V;
	GN = new gestornacionalidad();
	LV->moverInicio();
	while (! LV->finLista()){
		LV->consultar(V);
		V->nacionalidadordenada(GN);
       LV->avanzar();
	}
}

	ListaVias::~ListaVias()
	{

		delete LV;

	}

	/*
	 *un modulo que te entra el nombre deu n barrio y te devuelve una lista
	 * de estudios, para ello recorremos la lista de vias y para cada via
	 * si es del barrio que nos ha entrado por parametros invocamos al modulo
	 * de vi
	 */



	/*
	 * los arboles se insertan por el nombre ( para hacer algoritmos criticos)
	 * y al pasar la info de los datosdemograficos los estamos buscando en
	 * la lista de vias, esto funciona perfectamente PERO buscamos en la LV si
	 * intneto buscar por arboles, no puedo hacerlo porque por el dato que busco
	 * es por el codigo y todavia no tengoe lnombre ya que en el fichero
	 * de los datos del padron viene el codigo, no el nombre, no puedo
	 * buscar en arboles por codigos ya que esta ordenado por nombres.
	 * ---
	 *
	 * Cuando lo pasemos a arboles la funcionalidad del punto 3 solo funciona
	 * si es con listas no con arboles.
	 *
	 */
