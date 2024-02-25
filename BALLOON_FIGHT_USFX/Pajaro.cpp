#include "Pajaro.h"

Pajaro::Pajaro()
{
	Resistencia = 1;
	Velocidad = 1.5;
	Estado = 1;
}

void Pajaro::Golpear()
{
	std::cout << "Los pajaros golpearan al humano\n";
}

void Pajaro::Reinflar()
{
	std::cout << "Los pajaros reinflaran al ser derrivados\n";
}

void Pajaro::Flotar()
{
	std::cout << "Los pajaros flotaran al iniciar la aprtida\n";
}

void Pajaro::Aletear()
{
	std::cout << "Los pajaros aletearan para flotar\n";
}

void Pajaro::Morir()
{
	std::cout << "Los pajaros moriran al ser derrivados\n";
}
