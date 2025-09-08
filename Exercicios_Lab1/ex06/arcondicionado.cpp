#include "arcondicionado.h"

void ArCondicionado::setPotencia(int p)
{
    if (p < 0) p = 0;
    if (p > 10) p = 10;
    this->potencia = p;
}

void ArCondicionado::setTempExterna(double t)
{
    this->tempExterna = t;
}
