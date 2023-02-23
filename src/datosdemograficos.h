/*
 * datosdemograficos.h
 *
 *  Created on: 25/4/2018
 *      Author: guille
 */

#ifndef DATOSDEMOGRAFICOS_H_
#define DATOSDEMOGRAFICOS_H_
#include <iostream>
#include "gestorano.h"
#include "gestorlugarnacimiento.h"
#include "gestornacionalidad.h"
#include "gestorestudios.h"
using namespace std;

class datosdemograficos {

	gestorano * A;
	gestorestudios * E;
	gestorlugarnacimiento * LN;
	gestornacionalidad * N;

public:
	datosdemograficos();
	datosdemograficos(gestorano *A, gestorestudios *E,
			gestorlugarnacimiento *LN ,gestornacionalidad *N);
	datosdemograficos(const datosdemograficos & D);
	gestorano*& getA();
	void setA(gestorano*& a);
	gestorestudios*& getE();
	void setE( gestorestudios*& e);
	gestorlugarnacimiento*& getLn();
	void setLn(gestorlugarnacimiento*& ln);
	gestornacionalidad*& getN();
	void setN(gestornacionalidad*& n);
	void mostrar();
	void insertarano(Nacimiento *N); /* */
	void insertarestudio(Estudios *EN);
	void insertarlugarnacimiento(LugarNacimiento *N);
	void insertarnacionalidad(Nacionalidad *NA);
	int edad(int n);
	void estudiosporpersonas(gestorestudios *&GE);
	void nacionalidadorden(gestornacionalidad *&GN);
	~datosdemograficos();
};

#endif /* DATOSDEMOGRAFICOS_H_ */

/* 4 punteros a esos datos
 *
 * constrcctosres
 *
 * destructor
 * get y set
 * mostrar
 * insertar 4
 */


/*
 * abrir el fichero, control de errores, leemos la primera y la despreciamos
 *  ! finfichero #, usamos un vector de ocho celdas y en cada celda
 *  1 string, lo recorremos con for v[i]
 *
 */
