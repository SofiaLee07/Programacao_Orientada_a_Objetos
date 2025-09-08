#include <iostream>
#include <iomanip>
#include "carro.h"

int main()
{
    Carro c;

    while (true) {
        int op;
        std::cout << "\n===== MENU CARRO =====\n";
        std::cout << "1: Abastecer (litros)\n";
        std::cout << "2: Mover (km)\n";
        std::cout << "3: Consultar combustivel\n";
        std::cout << "4: Consultar distancia total\n";
        std::cout << "5: Mostrar estado\n";
        std::cout << "Outro numero: sair\n";
        std::cout << "Opcao: ";

        if (!(std::cin >> op)) return 0;

        switch (op) {
            case 1: {
                double l;
                std::cout << "---> Litros a abastecer: ";
                std::cin >> l;
                c.Abastecer(l);
                c.printCombustivel();
                break;
            }
            case 2: {
                double km;
                std::cout << "---> Distancia a percorrer (km): ";
                std::cin >> km;
                if (c.Mover(km)) {
                    std::cout << "---> Deslocamento realizado\n";
                } else {
                    std::cout << "---> Combustivel insuficiente. Autonomia: " << c.getAutonomia() << " km\n";
                }
                c.printEstado();
                break;
            }
            case 3:
                c.printCombustivel();
                break;
            case 4:
                c.printDistancia();
                break;
            case 5:
                c.printEstado();
                break;
            default:
                return 0;
        }
    }
    return 0;
}
