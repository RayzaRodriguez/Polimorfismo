#pragma once
#include"Birthday.h"
#include <string>
#include <iostream>

using namespace std;

class Persona
{
public:
	string nombre;
	Birthday cumpleanios;
	int dni, celular;

	Persona(string, Birthday, int, int);

	virtual void Mostrar();

	virtual ~Persona();

	
};

