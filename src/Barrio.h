/*
 * Barrio.h
 *
 *  Created on: 20/2/2018
 *      Author: guille
 */

#ifndef BARRIO_H_
#define BARRIO_H_
#include <iostream>
#include <fstream>
using namespace std;

const int MAX = 50;
class Barrio {

	string nombreBarrio;
	string nombreDistrito;

public:
	/*
	 * Constructor por defecto
	 * PRE:
	 * POST: devuelve el objeto inicializado
	 * COmpeljidad: O (1)
	 */
	Barrio();

	/*
	 * Constructor parametrizado
	 * PRE:
	 * POST:
	 * COMPELJIDAD:
	 */

	Barrio(string nombreBarrio, string perteneceADistrito);

	/*
	 * Constructor por copia
	 * PRE:
	 * POST:
	 * COMPLEJIDAD:
	*/

	Barrio(const Barrio&b);
	/*
	 * Destructor
	 * PRE:
	 * POST:
	 * Complejidad:
	 */
	~Barrio();

	/* PRE:
	 * POST:
	 * COMPLEJIDAD: O (1)
	 */

	string getNombreBarrio() const {
		return nombreBarrio;
	}

	/* PRE:
	 * POST:
	 * COMPLEJIDAD: O (1)
	 */

	void setNombreBarrio(const string& nombreBarrio) {
		this->nombreBarrio = nombreBarrio;
	}

	/* PRE:
	 * POST:
	 * COMPLEJIDAD: O (1)
	 */

	string getNombreDistrito() const {
		return nombreDistrito;
	}

	/* PRE:
	 * POST:
	 * COMPLEJIDAD: O (1)
	 */

	void setNombreDistrito(const string& nombreDistrito) {
		this->nombreDistrito = nombreDistrito;
	}

	/* PRE:
	 * POST:
	 * COMPLEJIDAD: O (1)
	 */

	void mostrar();


	bool operator == (const Barrio& b );
};

#endif /* BARRIO_H_ */
