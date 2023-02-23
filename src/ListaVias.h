/*
 * ListaVias.h
 *
 *  Created on: 6/3/2018
 *      Author: guille
 */

#ifndef LISTAVIAS_H_
#define LISTAVIAS_H_
#include <iostream>
#include "Via.h"
#include "listapi.h"

class ListaVias {

	ListaPI<Via *> * LV;

public:
	ListaVias();
	void insertar (Via *v);
	bool buscar (int nombre, Via *&v);
	void mostrar ();
	void mostrarviasdebarrio (string Bar);
	void viaDeVariosBarrios ();
	int recorreredades(string Bar, int n);
	void recorrerestudios(string Bar, gestorestudios *&GE);
	void recorrernacionalidad(gestornacionalidad * &GN);
	~ListaVias();
};

#endif /* LISTAVIAS_H_ */
