#include <iostream>
#include "televisao.h"

int main()
{
    Televisao tv;

    while (true) {
        int op;
        std::cout << "\n===== MENU TV =====\n";
        std::cout << "1: Aumentar volume (+1)\n";
        std::cout << "2: Diminuir volume (-1)\n";
        std::cout << "3: Definir volume (0..100)\n";
        std::cout << "4: Aumentar canal (+1)\n";
        std::cout << "5: Diminuir canal (-1)\n";
        std::cout << "6: Trocar para canal indicado (0..75)\n";
        std::cout << "7: Mostrar estado (canal/volume)\n";
        std::cout << "Outro numero: sair\n";
        std::cout << "Opcao: ";

        if (!(std::cin >> op)) return 0;

        switch (op) {
            case 1:
                tv.AumentaVolume();
                tv.printVolume();
                break;
            case 2:
                tv.DiminuiVolume();
                tv.printVolume();
                break;
            case 3: {
                int v;
                std::cout << "---> Informe volume (0..100): ";
                std::cin >> v;
                tv.setVolume(v);
                tv.printVolume();
                break;
            }
            case 4:
                tv.AumentaCanal();
                tv.printCanal();
                break;
            case 5:
                tv.DiminuiCanal();
                tv.printCanal();
                break;
            case 6: {
                int c;
                std::cout << "---> Informe canal (0..75): ";
                std::cin >> c;
                tv.setCanal(c);
                tv.printCanal();
                break;
            }
            case 7:
                tv.printEstado();
                break;
            default:
                return 0;
        }
    }
    return 0;
}
