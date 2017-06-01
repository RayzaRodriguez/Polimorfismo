#include "stdafx.h"
#include "Birthday.h"


Birthday::Birthday()
{

	this->dia = 0;
	this->mes = 0;
	this->anio = 0;
}

Birthday::Birthday(int d, int m, int a)
{
	this->dia = d;
	this->mes = m;
	this->anio = a;
}

int Birthday::Edad()
{
	int x = 2017 - anio;
	return x;
}

