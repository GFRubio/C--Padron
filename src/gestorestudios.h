/*
 * gestorestudios.h
 *
 *  Created on: 25/4/2018
 *      Author: guille
 */

#ifndef GESTORESTUDIOS_H_
#define GESTORESTUDIOS_H_
#include <iostream>
#include <fstream>
#include "listapi.h"
#include "Estudios.h"
using namespace std;

class gestorestudios {

	ListaPI<Estudios *> * L;

public:
	gestorestudios();
	void insorden(Estudios *E);
	bool buscar(Estudios *E, Estudios *& EA);
	void mostrar();
	void insordennum(Estudios *E);
	void ordenar(gestorestudios *&GE);
	void recorrer(gestorestudios *&GE);
	void listafichero();
	~gestorestudios();
};

#endif /* GESTORESTUDIOS_H_ */
