#pragma once
#include"Persona.h"

class Gerente: public Persona
{
public:
	int oficina = 0;	

	Gerente(string, Birthday, int, int);

	void Mostrar();

};

