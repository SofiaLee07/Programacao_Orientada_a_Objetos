#include <iostream>
#include "relogio.h"

void Relogio::setHorario(int hora, int min, int seg)
{
    if (
        ((hora < 0) || (hora > 23)) ||
        ((min < 0) || (min > 59)) ||
        ((seg < 0) || (seg > 59))
    ) {
        std::cout << "Horário invalido." << std::endl;
        return;
    }
    this->hora = hora;
    this->min = min;
    this->seg = seg;
}

void Relogio::getHorario(int& hora, int& min, int& seg) const // pega hora como referencia, se modificar o parametro vai modificar o valor fora da funcao
{
	hora = this->hora;
	min = this->min;
	seg = this->seg;
}

void Relogio::tick()
{
    ++this->seg;

    if (this->seg > 59) 
    {
        this->seg = 0;
        ++this->min;

        if (this->min > 59) 
        {
            this->min = 0;
            ++this->hora;

            if (this->hora > 23) 
            {
                this->hora = 0;
            }
        }
    }
}
