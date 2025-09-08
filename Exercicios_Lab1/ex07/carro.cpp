#include "carro.h"

void Carro::Abastecer(double litros)
{
    if (litros <= 0.0) return;
    this->combustivel += litros;
    if (this->combustivel > 50.0) this->combustivel = 50.0;
}

bool Carro::Mover(double km)
{
    if (km <= 0.0) return false;
    double litrosNecessarios = km / 15.0;
    if (litrosNecessarios > this->combustivel) return false;
    this->combustivel -= litrosNecessarios;
    this->distanciaTotal += km;
    return true;
}
