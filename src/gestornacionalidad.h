/*
 * gestornacionalidad.h
 *
 *  Created on: 25/4/2018
 *      Author: guille
 */

#ifndef GESTORNACIONALIDAD_H_
#define GESTORNACIONALIDAD_H_
#include <iostream>
#include "listapi.h"
#include "Nacionalidad.h"
using namespace std;

class gestornacionalidad {

	ListaPI<Nacionalidad *> * L;

public:
	gestornacionalidad();
	void insfinal(Nacionalidad *N);
	bool buscar(Nacionalidad *N, Nacionalidad *& NA);
	void mostrar();
	void insorden(Nacionalidad *N);
	void ordenar(gestornacionalidad *&GN);
	void pasarinfo(gestornacionalidad *& GN);
	~gestornacionalidad();
};

#endif /* GESTORNACIONALIDAD_H_ */
