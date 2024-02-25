#pragma once
#include<iostream>
#include<string>

class Burbuja
{
public:
	float Velocidad;
	std::string TipoMovimiento;
	int Estado;
	int cB = 0;
public:
	Burbuja();

	void GenerarBurbuja();
	void ChocarBurbuja();
};

