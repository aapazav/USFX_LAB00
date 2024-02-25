#include <iostream>
#include"Burbuja.h"
#include"Humano.h"
#include"MonstruoMarino.h"
#include"Obstaculo.h"
#include"Pajaro.h"

using namespace std;

int main(){
	Burbuja* Burbuja1 = new Burbuja();
	Humano* Humano2 = new Humano();
	MonstruoMarino* MonstruoMarino3 = new MonstruoMarino();
	Obstaculo* Obstaculo4 = new Obstaculo();
	Pajaro* Pajaro5 = new Pajaro();
	cout << "Inicio el juego" << endl;
	Burbuja1->ChocarBurbuja();
	Humano2->Golpear(Pajaro5);
	MonstruoMarino3->Comer();
	Obstaculo4->Bloquear();
	Pajaro5->Aletear();

	return 0;
}