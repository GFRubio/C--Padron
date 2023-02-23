/*
 * listabarrio.h
 *
 *  Created on: 4/4/2018
 *      Author: guille
 */

#ifndef LISTABARRIO_H_
#define LISTABARRIO_H_

#include <iostream>
#include "Barrio.h"
#include "listapi.h"

class listabarrio {

	ListaPI<Barrio *> * L;

public:
	listabarrio();
	void insertarorden(Barrio *B);
	bool buscar(Barrio *B, Barrio* &ba);
	void mostrar();
	void moverlistainicio();
	bool esfinlista();
	void consultarbarrio(Barrio *&B);
	void avanzarPI();
	~listabarrio();

	//Constructor
	// insertar en orden
	// buscar
	// mostrar

};

#endif /* LISTABARRIO_H_ */
