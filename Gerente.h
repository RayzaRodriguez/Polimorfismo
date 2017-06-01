#pragma once
#include"Persona.h"

class Gerente: public Persona
{
private:
	int oficina = 0;

public:

	Gerente(string, Birthday, int, int);

	void Mostrar();

};

