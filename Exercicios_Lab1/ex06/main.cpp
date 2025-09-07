#include <iostream>
#include <limits>
#include "arcondicionado.h"

int main()
{
    ArCondicionado a1, a2;

    double t1, t2;
    std::cout << "Informe temperatura externa do primeiro ambiente: ";
    std::cin >> t1;
    std::cout << "Informe temperatura externa do segundo ambiente: ";
    std::cin >> t2;

    a1.setTempExterna(t1);
    a2.setTempExterna(t2);

    a1.setPotencia(5);
    a2.setPotencia(10);

    std::cout << "\nResultado:\n";
    std::cout << "Ambiente 1 (pot=5): " << a1.getTempAmbiente() << " C\n";
    std::cout << "Ambiente 2 (pot=10): " << a2.getTempAmbiente() << " C\n";

    std::cout << "\nDetalhes:\n";
    a1.printEstado();
    a2.printEstado();

    std::cout << "Pressione Enter para sair...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    
    return 0;
}
