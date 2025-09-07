/*
Crie uma classe denominada Elevador para armazenar as informacoes de um elevador dentro de um predio.
A classe deve armazenar o andar atual (0 = terreo), total de andares no predio, excluindo o terreo,
capacidade do elevador, e quantas pessoas que estao presentes nele.

A classe deve implementar a seguinte interface:

    * Construtor: Deve receber como parametros: a capacidade do elevador e o total de andares no predio
    (os elevadores sempre comecam no terreo e vazios); **

    * entra: Acrescenta uma pessoa no elevador (so deve acrescentar se ainda houver espaco);

    * sai: para remover uma pessoa do elevador (so deve remover se houver alguem dentro dele);

    * sobe: para subir um andar (nao deve subir se ja estiver no ultimo andar);

    * desce: para descer um andar (nao deve descer se ja estiver no terreo);

    * Metodos de acesso aos atributos: retorna o valor de cada atributo da classe.
      Crie um metodo para cada atributo
 */


#pragma once

class Elevador
{
    int andar;
    int totalAndares;
    int maxCapacidade;
    int pessoasDentro;

public:
    Elevador(int totalAndares, int maxCapacidade)
        : andar{ 0 }
        , pessoasDentro{ 0 }
        , totalAndares{ totalAndares }
        , maxCapacidade{ maxCapacidade }
    {
    } // Ja que este construtor nao faz nada, nao precisa ser declarado mp .cpp

    void Entra();
    void Sai();
    void Sobe();
    void Desce();
    inline int GetAndar() const { return this->andar; };
    inline int GetTotalAndares() const { return this->totalAndares; };
    inline int GetMaxCapacidade() const { return this->maxCapacidade; };
    inline int GetPessoasDentro() const { return this->pessoasDentro; };
};