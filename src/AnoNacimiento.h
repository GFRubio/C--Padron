/*
 * Nacimiento.h
 *
 *  Created on: 24/4/2018
 *      Author: guille
 */

#ifndef ANONACIMIENTO_H_
#define ANONACIMIENTO_H_
#include <iostream>
using namespace std;

class Nacimiento {

	int ano;
	int numpersonas;

public:
	Nacimiento();
	Nacimiento(int ano, int numpersonas);
	Nacimiento(const Nacimiento& N);
	int getAno();
	void setAno(int ano);
	int getNumpersonas();
	void setNumpersonas(int numpersonas);
	void mostrar();
	bool operator == (const Nacimiento& N);
	~Nacimiento();
};

#endif /* ANONACIMIENTO_H_ */
