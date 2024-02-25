#include "Humano.h"
#include "Pajaro.h"
#include "Burbuja.h"

void Humano::Golpear(Pajaro* Pa1)
{
	if (Pa1->Estado == 1) {
		Pa1->Estado++;
		Pa1->Flotar();
	}
	else{
		Pa1->Morir();
	}
	/*if (B1.Estado == 1) {
		B1.
	}*/
}

void Humano::Aletear()
{
	std::cout << "El Humano aleteara cunado inicie la partida\n";
}
