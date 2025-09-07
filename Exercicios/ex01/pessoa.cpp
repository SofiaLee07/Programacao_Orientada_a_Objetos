#include "pessoa.h"
#include <iostream>

void pessoa::CriarPessoa()
{
    std::cout << "Nome da Pessoa: ";
    std::cin >> nome;
    std::cout << "Idade da Pessoa: ";
    std::cin >> idade;
    std::cout << "Altura da Pessoa: ";
    std::cin >> altura;
}

void pessoa::SetNome(std::string nome1)
{
    this->nome = nome1;
}

void pessoa::SetIdade(int a)
{
    this->idade = a;
}

void pessoa::SetAltura(float h)
{
    this->altura = h;
}

std::string pessoa::GetNome()
{
    return this->nome;
}

int pessoa::GetIdade()
{
    return this->idade;
}

float pessoa::GetAltura()
{
    return this->altura;
}

void pessoa::Print()
{
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Idade: " << this->idade << std::endl;
    std::cout << "Altura: " << this->altura << std::endl;
}
