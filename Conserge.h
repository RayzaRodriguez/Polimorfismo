#pragma once
#include"Persona.h"

class Conserge : public Persona
{
private:
	int sotano = 1;
public:
	Conserge(string, Birthday, int, int);

	void Mostrar();
};