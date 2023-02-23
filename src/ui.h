//============================================================================
// Name        : UI.h
// Author      : profesores de la asignatura EDI
// Version     : curso 17/18
// Copyright   :
// Description : Interfaz de usuario
//============================================================================


#ifndef UI_H_
#define UI_H_
#include "Gestor.h"


class UI {

	Gestor * P;

private:
	// TODO instanciar la clase principal
	int  menu     ();
	void ejecutar ();


public:

	 UI();
	~UI();
};

#endif /* UI_H_ */
