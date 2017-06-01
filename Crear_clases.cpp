// Crear_clases.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Persona.h"
#include "Gerente.h"
#include "Conserge.h"


int main()
{
	Persona* ListaPersona[2];
	ListaPersona[0] = new Gerente ("Mario", Birthday(05, 12, 1980), 70258476, 998565214);
	ListaPersona[1] = new Conserge("Marta", Birthday(14, 10, 1985), 45128799, 984257894);

	ListaPersona[0]->Mostrar();
	cout << endl;
	ListaPersona[1]->Mostrar();
    return 0;
}

