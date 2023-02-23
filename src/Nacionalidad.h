/*
 * Nacionalidad.h
 *
 *  Created on: 24/4/2018
 *      Author: guille
 */

#ifndef NACIONALIDAD_H_
#define NACIONALIDAD_H_
#include <iostream>
using namespace std;

class Nacionalidad {

	string pais;
	int numpersonas;

public:
	Nacionalidad();
	Nacionalidad(string pais, int numpersonas);
	Nacionalidad(const Nacionalidad& N);
	void mostrar();
	bool operator == (const Nacionalidad& N);
	int getNumpersonas();
	void setNumpersonas(int numpersonas);
	string getPais();
	void setPais(string& pais);
	~Nacionalidad();
};

#endif /* NACIONALIDAD_H_ */
