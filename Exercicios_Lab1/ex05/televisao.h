/* Exercicio 5
Implemente uma classe para abstrair uma televisão. A televisão tem um controle de volume do 
som e um controle de seleção de canal.

A classe implementada deve atender aos seguintes requisitos mínimos:

* O controle de volume permite aumentar ou diminuir a potência do volume de som em uma 
  unidade de cada vez.

* A potência do volume deve ter valores discretos no intervalo [0 , 100].

* O controle de canal também permite aumentar e diminuir o número do canal em uma unidade

* A interface também deve possibilitar a trocar para um canal indicado.

* 0s canais dever ter valores discretos no intervalo [0 , 75].

* Também devem existir métodos para consultar o valor do volume de som e o canal selecionado.

Caso julgar necessário, adicione na interface desta abstração, outros comportamentos que 
julgar necessários

Elabore um programa para realizar o teste da sua abstração. Lembre-se de realizar um teste completo 
da sua interface.*/

#pragma once
#include <iostream>

class Televisao
{
    int volume;
    int canal;
public:
    Televisao()
        : volume{ 20 }
        , canal{ 1 }
    {
    }

    void AumentaVolume();
    void DiminuiVolume();
    void setVolume(int v);
    inline int getVolume() const { return this->volume; }

    void AumentaCanal();
    void DiminuiCanal();
    void setCanal(int c);
    inline int getCanal() const { return this->canal; }

    void printVolume() const { std::cout << "---> Volume atual: " << this->getVolume() << std::endl; }
    void printCanal()  const { std::cout << "---> Canal atual: "  << this->getCanal()  << std::endl; }
    void printEstado() const {
        std::cout << "---> TV [canal=" << this->getCanal()
                  << ", volume=" << this->getVolume() << "]" << std::endl;
    }
};

