#pragma once
#include<iostream>
class Pajaro
{
public:

	int Resistencia;
	float Velocidad;
	int Estado;

public:

	Pajaro();

	void Golpear();
	void Reinflar();
	void Flotar();
	void Aletear();
	void Morir();
};

