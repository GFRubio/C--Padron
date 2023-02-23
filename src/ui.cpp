//============================================================================
// Name        : UI.cpp
// Author      : Profesores de la asignatura EDI
// Version     : Curso 17/18
// Copyright   :
// Description : Interfaz de usuario
//============================================================================

#include <fstream>
#include <iostream>
#include "ui.h"
#include "timer.h"

using namespace std;

UI::UI() {
	// TODO
	P = new Gestor();
	ejecutar();
}

void UI::ejecutar() {

	double t_start, t_end;
	int opcion;
	string nom;

	bool salir = false;
	do {
		opcion = menu();
		switch (opcion) {
		case 1:

			t_start = Time::getTime();
			cout << "Cargando datos ... " << endl;
			// TODO por hacer alg. 1
			P->volcarFichero();
			P->volcarFicheroVia();
			P->ficheropadron();
			cout << "Carga finalizada ... " << endl;
			t_end = Time::getTime();
			cout << "Time: " << t_end - t_start << "  " << endl;
			P->mostrar();
			P->mostrarVias();

			break;
		case 2:

				cout << "introduce un Barrio" << endl;
				getline(cin, nom);
			t_start = Time::getTime();
			// TODO por hacer alg. 2
			t_end = Time::getTime();
			P->mostrarViaDeBarrio(nom);
			cout << "Time: " << t_end - t_start << "  " << endl;
			break;
		case 3:

			t_start = Time::getTime();
			// TODO por hacer alg. 3
			t_end = Time::getTime();
			P->mostrarViaDeVariosBarrios();
			cout << "Time: " << t_end - t_start << "  " << endl;
			break;
		case 4:

			t_start = Time::getTime();
			// TODO por hacer alg. 4
			t_end = Time::getTime();
			cout << "Time: " << t_end - t_start << "  " << endl;
			break;
		case 5:
			t_start = Time::getTime();
			// TODO por hacer alg. 5

			P->nacionalidadpatron();
			t_end = Time::getTime();
			cout << "Time: " << t_end - t_start << "  " << endl;

			break;
		case 6:
			t_start = Time::getTime();
			// TODO por hacer alg. 6
			t_end = Time::getTime();
			cout << "Time: " << t_end - t_start << "  " << endl;

			break;
		case 7:

			t_start = Time::getTime();
			// TODO por hacer alg. 7
			t_end = Time::getTime();

			do {
				cout << endl;
				cout << "------MENU-------" << endl << endl;

				cout << "   0. Edades desde 0 hasta 9 años " << endl;
				cout << "   1. Edades desde 10 hasta 19 años  " << endl;
				cout << "   2. Edades desde 20 hasta 29 años  " << endl;
				cout << "   3. Edades desde 30 hasta 39 años   " << endl;
				cout << "   4. Edades desde 40 hasta 49 años   " << endl;
				cout << "   5. Edades desde 50 hasta 59 años  " << endl;
				cout << "   6. Edades desde 60 hasta 69 años " << endl;
				cout << "   7. Edades desde 70 hasta 79 años  " << endl;
				cout << "   8. Edades desde 80 hasta 89 años   " << endl;
				cout << "   9. Edades desde 90 hasta 99 años  " << endl;
				cout << "   9. Edades desde 100 hasta 109 años  " << endl;
				cout << endl;
				cout << " Opcion:  ";
				cin.ignore();

			} while ((opcion < 0) || (opcion > 11));
			P->edadpadron(opcion);

			cout << "Time: " << t_end - t_start << "  " << endl;
			break;
		case 8:

			cout << "introduce el nombre de un barrio" << endl;
			getline(cin, nom);
			t_start = Time::getTime();
			// TODO por hacer alg. 8
			t_end = Time::getTime();
            P->estudiospatron(nom);
			cout << "Time: " << t_end - t_start << "  " << endl;
			break;
		case 9:
			t_start = Time::getTime();
			// TODO por hacer alg. 9
			t_end = Time::getTime();
			cout << "Time: " << t_end - t_start << "  " << endl;

			break;
		case 10:

			t_start = Time::getTime();
			// TODO por hacer alg. 10
			t_end = Time::getTime();
			cout << "Time: " << t_end - t_start << "  " << endl;

			break;
		case 11:

			t_start = Time::getTime();
			// TODO por hacer alg. 11
			t_end = Time::getTime();
			cout << "Time: " << t_end - t_start << "  " << endl;

			break;
		case 12:
			t_start = Time::getTime();
			// TODO por hacer alg. 12
			t_end = Time::getTime();
			cout << "Time: " << t_end - t_start << "  " << endl;
			break;
		case 0:
			salir = true;
			break;
		default:
			cout << "ERROR en la opcion de menu" << endl;
			break;
		}

	} while (!salir);
}

int UI::menu() {

	int opcion;

	do {
		cout << endl;
		cout
				<< "_________________________________ MENU PRINCIPAL __________________________________"
				<< endl << endl;

		cout
				<< "   1. Carga de datos                                                               "
				<< endl;
		cout
				<< "   2. Mostrar vías de un barrio                                                    "
				<< endl;
		cout
				<< "   3. Mostrar las vías que pertenecen a varios barrios                             "
				<< endl;
		cout
				<< "   4. Mostrar el número de habitantes de Cáceres agrupados por rango de edad       "
				<< endl;
		cout
				<< "   5. Listado por nacionalidades                                                   "
				<< endl;
		cout
				<< "   6. Número de habitantes por provincia de nacimiento                             "
				<< endl;
		cout
				<< "   7. Barrio con mayor número de habitantes para un rango de edad                  "
				<< endl;
		cout
				<< "   8. Fichero por nivel de estudios de todos los ciudadanos de un barrio           "
				<< endl;
		cout
				<< "   9. Barrio con mayor porcentaje de hombres/mujeres.                              "
				<< endl;
		cout
				<< "  10. Fichero con los habitantes nacidos en los pueblos de una provincia           "
				<< endl;
		cout
				<< "  11. Fichero por lugar de nacimiento de una determinada vía (Alg. crítico)        "
				<< endl;
		cout
				<< "  12. Listado nº de personas nacidas en una provincia de las vias que comiencen por...(Alg.crítico)"
				<< endl;

		cout << endl;
		cout << "   0. Finalizar. " << endl;
		cout << " Opcion:  ";
		cin >> opcion;
		cin.ignore();

	} while ((opcion < 0) || (opcion > 13));

	return opcion;
}

UI::~UI() {
	// TODO delete a la instancia creada;
	delete P;
	cout << "Finalizado....";
}

int main() {
	UI ui;
	return 0;
}

