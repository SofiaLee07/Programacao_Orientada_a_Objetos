#include <iostream>
#include "circulo.h"

int main()
{
	Circulo circulo1;

	int op;

	while (true) {
		std::cout << "\n1: Set valor do raio" << std::endl;
		std::cout << "2: Get valor do raio" << std::endl;
		std::cout << "3: Calcular area" << std::endl;
		std::cout << "4: Redimensionar circulo" << std::endl;
		std::cout << "5: Set centro (X,Y) do circulo" << std::endl;
		std::cout << "6: Get centro (X,Y) do circulo" << std::endl;
		std::cout << "Selecione qualquer outra opcao para sair: ";

		std::cin >> op;

		switch (op) {
		case 1: {
			float tempRaio;
			std::cout << "---> Informe valores de raio: ";
			std::cin >> tempRaio;
			circulo1.setRaio(tempRaio);
			break;
		}
		case 2:
			circulo1.printRaio();
			break;
		case 3:
			circulo1.printArea();
			break;
		case 4:{
			float porcentagem;
			std::cout << "---> Informe porcentagem de redimensionamento: ";
			std::cin >> porcentagem;
			circulo1.multiplicaRaioPorPorcentagem(porcentagem);
			break;
		}
		case 5: {
			float centroX, centroY;
			std::cout << "Informe centro X e Y: ";
			std::cin >> centroX >> centroY;
			circulo1.setCentro(centroX, centroY);
			break;
		}

			break;
		case 6:
			circulo1.printCentro();
			break;
		default:
			return 0;
		}
	}
	return 0;
}
