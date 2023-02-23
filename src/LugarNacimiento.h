/*
 * LugarNacimiento.h
 *
 *  Created on: 24/4/2018
 *      Author: guille
 */

#ifndef LUGARNACIMIENTO_H_
#define LUGARNACIMIENTO_H_
#include <iostream>
using namespace std;

class LugarNacimiento {

	string provincia;
	string ciudad;
	int numpersonas;

public:
	LugarNacimiento();
	LugarNacimiento(string provincia, string ciudad, int numpersonas);
	LugarNacimiento(const LugarNacimiento& N);
	string getCiudad();
	void setCiudad(string& ciudad);
	int getNumpersonas();
	void setNumpersonas(int numpersonas);
	string getProvincia();
	void setProvincia(string & provincia);
	void mostrar();
	bool operator == (const LugarNacimiento & N);
	~LugarNacimiento();
};

#endif /* LUGARNACIMIENTO_H_ */
