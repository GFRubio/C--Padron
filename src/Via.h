/*
 * Via.h
 *
 *  Created on: 20/2/2018
 *      Author: guille
 */

#ifndef VIA_H_
#define VIA_H_
#include <iostream>
#include "Barrio.h"
#include "datosdemograficos.h"
using namespace std;

class Via {

	string nombreVia;
	float lVias;
	string tipoVia;
	int codigoVia;
	Barrio *barriovia; // agregar una clase a otra)//
	datosdemograficos * DD;

public:
	Via();
	Via(string nombreVia, float longitudVia, string tipoVia, int codigoVia,
			Barrio *barriovia, datosdemograficos *DD);

	// constructor por copia//
	Via(const Via &v);

	void mostrar();

	 bool operator == (const Via &V);

	 bool operator > (const Via &V);

     /*
      * El == nombre y tipo
      * EL > primero por el nombre, pero si es igual por el tipo pero si
      * el tipo es igual por el nombre del barrio
      */

	 ~Via();
	Barrio* getBarriovia();
	void setBarriovia(Barrio*& barriovia);

	int getCodigoVia();
	void setCodigoVia(int codigoVia);
	float getVias();
	void setVias(float vias);
	string getNombreVia();
	void setNombreVia(string nombreVia);
    string getTipoVia();
	void setTipoVia(string tipoVia);
	datosdemograficos*& getDd();
	void setDd(datosdemograficos*& dd);
	int llamarpatron(int n);
	void estudioporpersonas(gestorestudios *& GE);
	void nacionalidadordenada(gestornacionalidad *& GN);
};

#endif /* VIA_H_ */
