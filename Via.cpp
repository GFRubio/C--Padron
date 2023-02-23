/*
 * Via.cpp
 *
 *  Created on: 20/2/2018
 *      Author: guille
 */

#include "Via.h"

Via::Via() {

	nombreVia = "";
	longitudVia = 0;
	tipoVia = "";
	codigoVia = 0;
	barriovia = NULL;
	cout << "Generando constructor por defecto" << endl;

}

Via::Via(string nombreVia, float longitudVia, string tipoVia, int codigoVia,
		Barrio *barriovia) {

	this->nombreVia = nombreVia;
	this->longitudVia = longitudVia;
	this->tipoVia = tipoVia;
	this->codigoVia = codigoVia;
	this->barriovia = barriovia;
	cout << "Generando constructor parametrizado" << endl;

}

Via::Via(const Via &v) {



}

Via::~Via() {
	// TODO Auto-generated destructor stub

}
void Via::show() {

	cout << tipoVia << "" << nombreVia << "" << longitudVia << "m" << codigoVia
	",";

	if (barriovia != NULL) {
		barriovia->show();

	}

}

void Via::cargarVia() {

	const int MAX = 20;
	Via v;
	ifstream fEnt;
	string linea, Barriosituado, Via, tipoVia;
	float longitud;
	int codigo;
	if (fEnt.is_open()) {
		getline(fEnt, linea);
		for (int i = 0; i < MAX; i++) {
			getline(fEnt, Barriosituado);

		}

	}
}

void pruebaVia() {

	Barrio *b;
	b = new Barrio("El Vivero", "Oeste");

	Via *v;

	v = new Via;
	v->setNombreVia("Gredos");
	v->setTipoVia("Calle");
	v->setLongitudVia(200.3);
	v->setCodigoVia(3024);
	v->setBarrioVia();

void leerFicheroVias() {
	int i;
	Via *v;
	Barrio *b;

	ifstream fEnt;
	fEnt.open("Via.csv");
	string linea, uri, barrio, cod;
	string campo[5];
	if (fEnt.is_open()) {
		getline (fEnt, linea); //leo cabecera//
		while (!fEnt.eof()) {
			for (i = 0; i < 4; i++) {
				getline (fEnt, campo[i], '#');
			}
			if (!fEnt.eof()) {
				getline(fEnt, cod);
				b = NULL;
				b = new barrio(campo[0]);
				v = new Via (b,campo[1], atof(campo[2].c_str())
						, campo[3],cod); //esta mal el orden //
				vVias[j] = y;
			}

		}
	} else
		cout << "Error: El fichero Via.csv no se ha encontrado" << endl;
	fEnt.close();
	for (i = 0; j<MAX; i++){
		vVias[i] -> mostrar();
		cout << endl;
		delete vVias[i];

	}

	// b = new barrio(campo[0] //

}

}

bool Via::operator == (const Via&v){
		return (nombreVia == v.nombreVia);
}
