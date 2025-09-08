#include <iostream>
#include <cstdlib>
#include "circulo.h"


void Circulo::setCentro(float centroX, float centroY)
{
	this->centroX = centroX;
	this->centroY = centroY;
}

float Circulo::distCentro(Circulo& other)
{
	float distanciaX = abs(this->centroX - other.centroX);
	float distanciaY = abs(this->centroY - other.centroY);

	float distancia = sqrt(std::pow(distanciaX, 2) + std::pow(distanciaY, 2));

	return distancia;
}

void Circulo::multiplicaRaioPorPorcentagem(float porcentagem)
{
	this->raio = this->raio * (1.0f + porcentagem);
}

void Circulo::setRaio(float raio)
{
	if (raio < 0) {
		std::cout << "Valor invalido.";
		return;
	}
	this->raio = raio;
}