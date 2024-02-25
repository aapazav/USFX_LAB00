#pragma once
#include<iostream>
#include<string>
class Obstaculo
{
public:
	int UbicasionX;
	int UbicasionY;
	std::string TipoObstaculo;
public:
	Obstaculo();

	void Bloquear();
	void Derrivar();
};

