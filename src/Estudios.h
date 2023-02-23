/*
 * Estudios.h
 *
 *  Created on: 24/4/2018
 *      Author: guille
 */

#ifndef ESTUDIOS_H_
#define ESTUDIOS_H_

#include <iostream>
using namespace std;

class Estudios {

	string titulacion;
	int numpersonas;


public:
	Estudios();
	Estudios(string titulacion, int numpersonas);
	Estudios(const Estudios & E);
	int getNumpersonas();
	void setNumpersonas(int numpersonas);
	string getTitulacion();
	void setTitulacion(string& titulacion);
	void mostrar();
	bool operator == (const Estudios & E);
	~Estudios();
};

#endif /* ESTUDIOS_H__*/_

