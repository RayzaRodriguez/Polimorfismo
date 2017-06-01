#pragma once
#include"Persona.h"

class Conserge : public Persona
{
public:
	int sotano = 1;

	Conserge(string, Birthday, int, int);

	void Mostrar();
};