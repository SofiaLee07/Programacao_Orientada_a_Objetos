/*Exercicio 01
Crie uma classe Pessoa para representar uma pessoa, com os atributos privados de nome, idade e altura.
 Crie os métodos públicos necessários para acessar e modificar os atributos desta classe e crie 
 um método para imprimir os dados da pessoa.

Implemente um programa de teste que utilize toda a interface da classe criada.*/


#ifndef PESSOA_H
#define PESSOA_H
#include <string>

class pessoa
{
private:
    std::string nome;
    int idade;
    float altura;

public:
    void CriarPessoa();
    void SetNome(std::string nome1);
    void SetIdade(int a);
    void SetAltura(float h);
    std::string GetNome();
    int GetIdade();
    float GetAltura();

    void Print();
};

#endif // PESSOA_H
