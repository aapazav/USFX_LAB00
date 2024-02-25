#pragma once

class Pajaro;
class Burbuja;

class Humano
{
public:
	int Vida;
	int Resistencia;
	float Velicidad;
	
	Pajaro* P1;
	Burbuja* B1;

public:
	void Golpear(Pajaro* Pa1);
	void Aletear();

};

