#pragma once
#include"Birthday.h"
#include <string>
#include <iostream>

using namespace std;

class Persona
{

protected:
	string nombre;
	Birthday cumpleanios;
	int dni, celular;

public:

	Persona(string, Birthday, int, int);

	virtual void Mostrar();

	Persona:: ~Persona();

	
};

