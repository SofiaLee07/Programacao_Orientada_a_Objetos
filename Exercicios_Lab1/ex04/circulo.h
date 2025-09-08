/*Exercicio 04
Definir uma classe que abstraia um círculo

Esta classe deve possuir métodos Privados para:

calcular a área do cı́rculo;
calcular a distância entre os centros de 2 cı́rculos;
calcular a circunferência do cı́rculo.
E métodos Públicos para:

definir o raio do cı́rculo, dado um número real;
aumentar o raio do cı́rculo, dado um percentual de aumento;
definir o centro do cı́rculo, dada uma posição (X,Y);
imprimir o valor do raio;
imprimir o centro do cı́rculo.
imprimir a área do cı́rculo.
Criar um programa principal para testar a classe.*/

#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include <utility>

class Circulo
{
	float centroX;
	float centroY;
	float raio;
private:
	inline float calcArea() const { return ((float)M_PI * (this->raio * this->raio)); };
	float distCentro(Circulo& other);
	inline float calcCirc() const { return (2.0f * (float)M_PI * this->raio); };
public:
	Circulo() //criando circulo1
	{
		this->raio = 0;
		this->centroX = 0;
		this->centroY = 0;
	}
	Circulo(float raio, float centroX, float centroY) //criando circulo2, isto é chamado de "constructor overloading"
	{
		this->raio = raio;
		this->centroX = centroX;
		this->centroY = centroY;
	}
	void setRaio(float raio);
	void setCentro(float centroX, float centroY);
	void multiplicaRaioPorPorcentagem(float porcentagem);
	inline float getArea() const { return this->calcArea(); }
	inline float getRaio() const { return this->raio; }
	std::pair<float, float> getCentro() const { return std::make_pair(this->centroX, this->centroY); }

	void printArea() const { std::cout << "---> Circulo area: " << this->getArea() << std::endl; }
	void printRaio() const { std::cout << "---> Circulo raio: " << this->getRaio() << std::endl; }
	void printCentro() const {
		auto [x, y] = this->getCentro();

		std::cout << "---> Centro x, y: " << x << ", " << y << std::endl;
	}
};