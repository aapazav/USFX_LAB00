#include "Obstaculo.h"

Obstaculo::Obstaculo()
{
	UbicasionX = 1;
	UbicasionY = 2;
	TipoObstaculo = "bloque";
}

void Obstaculo::Bloquear()
{
	UbicasionX = 1;
	UbicasionY = 2;
	TipoObstaculo ="bloque";
}

void Obstaculo::Derrivar()
{
	std::cout << "Los Obstaculos derrivara al humano\n";
}
