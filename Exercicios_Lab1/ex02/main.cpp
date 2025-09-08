#include <iostream>
#include <windows.h> 
#include <conio.h>
#include "elevador.h"

int main() {
    
    SetConsoleOutputCP(CP_UTF8);

    Elevador elevador{ 10, 5 };

    std::cout << "Capacidade maxima: " << elevador.GetMaxCapacidade() << std::endl;
    std::cout << "Numero de andares: " << elevador.GetTotalAndares() << std::endl;
    std::cout << "Andar atual: " << elevador.GetAndar() << std::endl;
    std::cout << "Pessoas dentro: " << elevador.GetPessoasDentro() << std::endl;

    std::cout << "Pressione ↑ para subir, ↓ para descer, → para entrar, ← para sair, e s para sair" << std::endl;

    while (true) {
        int key = _getch();
        switch (key) {
            case 72: // seta para cima
                elevador.Sobe();
                std::cout << "Andar atual: " << elevador.GetAndar() << std::endl;
                break;
            case 80: // seta para baixo
                elevador.Desce();
                std::cout << "Andar atual: " << elevador.GetAndar() << std::endl;
                break;
            case 77: // seta para direita
                elevador.Entra();
                std::cout << "Pessoas dentro: " << elevador.GetPessoasDentro() << std::endl;
                break;
            case 75: // seta para esquerda
                elevador.Sai();
                std::cout << "Pessoas dentro: " << elevador.GetPessoasDentro() << std::endl;
                break;
            case 's': // tecla q para sair
                return 0;
            default:
                break;
        }
    }
    return 0;
}
