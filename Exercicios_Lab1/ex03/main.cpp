#include <iostream>
#include <time.h>

#include "relogio.h"

int main()
{
    srand(time(NULL));

    Relogio relogio1;

    int tempHoras, tempMinutos, tempSegundos;

    std::cout << "Informe a hora (0-23): ";
    std::cin >> tempHoras;
    std::cout << "Informe os minutos (0-59): ";
    std::cin >> tempMinutos;
    std::cout << "Informe os segundos (0-59): ";
    std::cin >> tempSegundos;

    relogio1.setHorario(tempHoras, tempMinutos, tempSegundos); // COPIA esses valores temporarios para relogio1(atributos) se forem validos

    relogio1.getHorario(tempHoras, tempMinutos, tempSegundos); // REFERENCIA

    std::cout << tempHoras << ":" << tempMinutos << ":" << tempSegundos << std::endl;

    int ticks = rand() % 100000; //gera um número aleatório para fazer o tick
    //int ticks = 3675;  // gera um numero fixo para fazer o tick

    for (int i = 0; i < ticks; ++i) {
        relogio1.tick();
    }

    std::cout << ticks << std::endl;

    relogio1.getHorario(tempHoras, tempMinutos, tempSegundos); // REFERENCIA

    std::cout << tempHoras << ":" << tempMinutos << ":" << tempSegundos << std::endl;
    
    return 0;
}