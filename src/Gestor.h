/*
 * Gestor.h
 *
 *  Created on: 10/4/2018
 *      Author: guille
 */

#ifndef GESTOR_H_
#define GESTOR_H_
#include <fstream>
#include "listabarrio.h"
#include "ListaVias.h"
#include "Utils.h"

class Gestor {

	listabarrio *LB;
	ListaVias * LV;

public:
	Gestor();
	void volcarFichero();
	void mostrar();
	void volcarFicheroVia();
	void mostrarVias();
	void mostrarViaDeBarrio(string nom);
	void mostrarViaDeVariosBarrios();
	void ficheropadron();
	void edadpadron(int n);
    void estudiospatron(string Bar);
    void nacionalidadpatron();
	~Gestor();
};

#endif /* GESTOR_H_ */


/*
 * 1 unico atributo, puntero a lista de barrios
 * constructor y destructor
 * volcar el fichero que pase la informacion del fichero
 *  csv a la lista de barrios
 *  mostrar (llamamos al mostrar que ya tenemos hecho
 */

/*
 * a la hora de volcar el fichero de vias leo el nombre de un barrio
 * del fichero, lo busco en LB, y si lo encuentra me devuelve un puntero
 * a ese barrio en cuestion, ese puntero es el que meto en mi via
 *
 *
 *vector de ocho celda que contiene 1 string en cada celda
 *para cada celda de ese vector tengo que llamar al modulo que me
 *pasa a otro vector (modulo springstiptovector o algo asi)
 *
 */
