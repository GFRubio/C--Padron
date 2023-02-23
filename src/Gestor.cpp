/*
 * Gestor.cpp
 *
 *  Created on: 10/4/2018
 *      Author: guille
 */

#include "Gestor.h"

Gestor::Gestor() {

	LB = new listabarrio();
	LV = new ListaVias();
	cout << "iniciando constructor por defecto" << endl;
}

void Gestor::volcarFichero() {

	ifstream fEnt;
	string Bar;
	string Dist;

	fEnt.open("Barrio.csv");
	if (!fEnt.is_open()) {
		cout << "error al abrir el fichero" << endl;
	} else {

		getline(fEnt, Bar, '\n');
		while (!fEnt.eof()) {
			getline(fEnt, Bar, '#');
			getline(fEnt, Dist, '\n');
			if (!fEnt.eof()) {
				Barrio *B = new Barrio(Bar, Dist);
				LB->insertarorden(B);
			}
		}
	}

	fEnt.close();

}

void Gestor::mostrar() {

	LB->mostrar();

}

/*
 string nombreVia;
 float lVias;
 string tipoVia;
 int codigoVia;
 Barrio *barriovia; // agregar una clase a otra)//
 */

void Gestor::volcarFicheroVia() {

	Barrio *ba;
	ifstream fEnt;
	string NomVia;
	string lVias;
	string tipoVia;
	string codigoVia;
	string nombrebarrio;
	float longvia;
	int codiVia;

	fEnt.open("Via.csv");
	if (!fEnt.is_open()) {
		cout << "error al abrir el fichero" << endl;
	} else {

		getline(fEnt, NomVia, '\n');
		while (!fEnt.eof()) {
			getline(fEnt, nombrebarrio, '#');
			getline(fEnt, NomVia, '#');
			getline(fEnt, lVias, '#');
			getline(fEnt, tipoVia, '#');
			getline(fEnt, codigoVia, '\n');
			if (!fEnt.eof()) {
				longvia = atof(lVias.c_str());
				codiVia = atoi(codigoVia.c_str());
				Barrio *barriovia = new Barrio(nombrebarrio, "");
				if (LB->buscar(barriovia, ba)) {
					Via *V = new Via(NomVia, longvia, tipoVia, codiVia, ba,
					NULL);
					LV->insertar(V);

				}
			}

		}
		fEnt.close();
	}
}

void Gestor::mostrarVias() {

	LV->mostrar();

}

void Gestor::mostrarViaDeBarrio(string nom) {


	LV->mostrarviasdebarrio(nom);

}

void Gestor::mostrarViaDeVariosBarrios() {

	LV->viaDeVariosBarrios();

}

/*
 * codigo via
 * #schema_birthDate
 * #schema_birthPlace
 * #dcterms_educationLevel
 * #num_female
 * #num_male
 * #schema_nationality
 * #time_year
 *
 *
 */

void Gestor::ficheropadron() {

	ifstream fEnt;
	string W[8];
	char delim = ';';
	string text;
	vector<string> vTexto;
	vector<string> vString;

	fEnt.open("InformacionPadron.csv");
	if (!fEnt.is_open()) {
		cout << "error al abrir el fichero" << endl;
	} else {

		getline(fEnt, W[0], '\n');
		while (!fEnt.eof()) {
			for (int i = 0; i < 7; i++) {
				getline(fEnt, W[i], '#');
			}
			getline(fEnt, W[7], '\n');
			datosdemograficos * DD = new datosdemograficos();
			if (!fEnt.eof()) {

				vTexto = splitStringToVector(W[1], ';');
				for (int i = 0; i < static_cast<int>(vTexto.size()); i++) {
					vString = splitString(vTexto[i]);

					Nacimiento * PN = new Nacimiento(atoi(vString[0].c_str()),
							atoi(vString[1].c_str()));
					DD->insertarano(PN);
				}

				vTexto = splitStringToVector(W[2], ';');
				for (int i = 0; i < static_cast<int>(vTexto.size()); i++) {
					vString = splitString(vTexto[i]);

					if (vString.size() == 3) {
						LugarNacimiento * LN = new LugarNacimiento(vString[0],
								vString[1], atoi(vString[2].c_str()));
						DD->insertarlugarnacimiento(LN);
					} else {
						LugarNacimiento * LN = new LugarNacimiento("",
								vString[0], atoi(vString[1].c_str()));

						DD->insertarlugarnacimiento(LN);
					}
				}

				vTexto = splitStringToVector(W[3], ';');
				for (int i = 0; i < static_cast<int>(vTexto.size()); i++) {
					vString = splitString(vTexto[i]);

					Estudios * PE = new Estudios(vString[0],
							atoi(vString[1].c_str()));
					DD->insertarestudio(PE);
				}

				vTexto = splitStringToVector(W[6], ';');
				for (int i = 0; i < static_cast<int>(vTexto.size()); i++) {
					vString = splitString(vTexto[i]);

					Nacionalidad * N = new Nacionalidad(vString[0],
							atoi(vString[1].c_str()));
					DD->insertarnacionalidad(N);
				}

				Via * V;
				if (LV->buscar(atoi(W[0].c_str()), V))
					V->setDd(DD);
			} ////////////////////////

		}
	}
	fEnt.close();

}

void Gestor::edadpadron(int n) {

	Barrio *B;
	string mayorbarrio = "";
	int x = 0,mayor=0;
	LB->moverlistainicio();
	while (!LB->esfinlista()) {
		LB->consultarbarrio(B);
		x=LV->recorreredades(B->getNombreBarrio(), n);
		if (B->getNombreBarrio()=="Mejostilla")
			cout<<x<<endl;
		if (x > mayor) {
			mayor = LV->recorreredades(B->getNombreBarrio(), n);
			mayorbarrio = B->getNombreBarrio();
// estoy hay que arreglarlo!!!//
		}
		LB->avanzarPI();
	}
	cout<< "barrio con mayor numero de habitantes de esa franja de edad"
			"	es " << mayorbarrio << endl;

}

void Gestor::estudiospatron(string Bar){

gestorestudios *GE;
gestorestudios *GX;

LV->recorrerestudios(Bar, GE);
GE->ordenar(GX);
GX->listafichero();

}

void Gestor::nacionalidadpatron(){

gestornacionalidad *GN;
gestornacionalidad *G;
LV->recorrernacionalidad(GN);
GN->ordenar(G);
G->mostrar();

}

Gestor::~Gestor() {
	delete LB;
	delete LV;
}
/*
 *vector de ocho celda que contiene 1 string en cada celda
 *para cada celda de ese vector tengo que llamar al modulo que me
 *pasa a otro vector (modulo springstiptovector o algo asi)
 *
 */
//
/*
 *  void pruebaTrocearCadenaAnioNacimiento(string text){
 char delim = ';';
 vector<string> vText = splitStringToVector(text, delim);
 for (int i = 0; i < static_cast<int>(vText.size()); i++) {
 vector<string> vString = splitString(vText[i]);
 cout << "Año: "<< vString[0]<< "  nº personas: "<< atoi(vString[1].c_str())<<endl;
 }
 }
 */

/*
 * nos entra el nombre del barrio como parametro, definimos la lista como
 * variable interna, llamamos al de listavias que nos devuelve 1 lista
 * la ordenamos y una vez este ordenada llamaremos al modulo que haremos
 * antes que nos la pasara a un fichero
 *
 * en el UI vamos a pedir un barrio al usuario y llamamos al modulo
 * del gestor.
 */
