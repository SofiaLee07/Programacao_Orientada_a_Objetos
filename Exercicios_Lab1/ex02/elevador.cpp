#include <iostream>
#include "elevador.h"

void Elevador::Entra() {
    if (this->maxCapacidade > this->pessoasDentro)
    {
        ++this->pessoasDentro;
        std::cout << "Pessoas dentro: " << this->pessoasDentro << std::endl;
    }
    else 
    {
        std::cout << "Capacidade máxima alcançada" << std::endl;
    }
}

void Elevador::Sai() {
    if (this->pessoasDentro > 0)
    {
        --this->pessoasDentro;
        std::cout << "Pessoas dentro: " << this->pessoasDentro << std::endl;
    }
    else
    {
        std::cout << " Sem pessoas dentro" << std::endl;
    }
}

void Elevador::Sobe() {
    if (this->andar < (this->totalAndares - 1))
    {
        ++this->andar;
        std::cout << "Andar atual: " << this->andar << std::endl;
    }
    else
    {
        std::cout << "Já no último andar" << std::endl;
    }
}

void Elevador::Desce() {
    if (0 < this->andar) {
        --this->andar;
        std::cout << "Andar atual: " << this->andar << std::endl;
    }
    else
    {
        std::cout << "Já no térreo" << std::endl;
    }
}

