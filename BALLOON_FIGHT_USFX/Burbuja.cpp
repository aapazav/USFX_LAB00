#include "Burbuja.h"

Burbuja::Burbuja()
{
	Velocidad = 1.2;
	TipoMovimiento = "ataque";
	Estado = 1;
}

void Burbuja::GenerarBurbuja()
{
	if (cB == 5) {
		Burbuja Bu1;
		cB = 0;
	}
	cB++;
}

void Burbuja::ChocarBurbuja()
{
	std::cout << "La Burbuja explotara al chocar" << std::endl;
}
