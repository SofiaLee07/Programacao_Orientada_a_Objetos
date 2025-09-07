/*Exercício 07
Implemente ua abstração de umm carro. O tanque de combustı́vel do carro armazena no máximo 50 
litros de gasolina. O carro consome 15 km/litro. Deve ser possı́vel:

Abastecer o carro com uma certa quantidade de gasolina;
Mover o carro em uma determinada distância (medida em km);
Retornar a quantidade de combustı́vel e a distância total percorrida.
Elabore um programa para realizar o teste da sua abstração. Lembre-se de realizar um teste 
completo da sua interface e considerar possíveis inconsistências de estado (ex. um carro não 
pode percorrer uma certa distância se ele não possuir combustível suficiente para isto).*/

#pragma once
#include <iostream>

class Carro
{
    double combustivel;
    double distanciaTotal;
public:
    Carro()
        : combustivel{ 0.0 }
        , distanciaTotal{ 0.0 }
    {
    }

    void Abastecer(double litros);
    bool Mover(double km);
    inline double getCombustivel() const { return this->combustivel; }
    inline double getDistanciaTotal() const { return this->distanciaTotal; }
    inline double getAutonomia() const { return this->combustivel * 15.0; }

    void printCombustivel() const { std::cout << "---> Combustivel: " << this->getCombustivel() << " L" << std::endl; }
    void printDistancia()  const { std::cout << "---> Distancia total: " << this->getDistanciaTotal() << " km" << std::endl; }
    void printEstado()     const {
        std::cout << "---> Tanque: " << this->getCombustivel()
                  << " L | Autonomia: " << this->getAutonomia()
                  << " km | Distancia total: " << this->getDistanciaTotal() << " km" << std::endl;
    }
};
