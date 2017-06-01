#include "stdafx.h"
#include "Persona.h"


Persona::Persona(string nom, Birthday cum, int dn, int cel)
{
	this->nombre = nom;
	this->cumpleanios = cum;
	this->dni = dn;
	this->celular = cel;
}

void Persona::Mostrar()
{
	cout << "Persona";
}


Persona::~Persona()
{
}
