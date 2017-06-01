#include "stdafx.h"
#include "Gerente.h"


Gerente::Gerente(string nom,Birthday cum, int dn, int cel):Persona(nom,cum,dn,cel)
{
}


void Gerente::Mostrar()
{
	cout << "El Gerente " <<nombre << endl;
	cout << "D.N.I n°: " <<dni << endl;
	cout << "Fecha de Nacimiento: " << cumpleanios.dia << "/" << cumpleanios.mes << "/" << cumpleanios.anio << endl;
	cout << "Su edad es: " << cumpleanios.Edad() << endl;
	cout << "Numero de celular: " <<celular << endl;
	cout << "Trabaja en: " <<oficina << endl;
}