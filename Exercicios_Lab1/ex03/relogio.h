/*
Exercício 03
Crie uma classe em C++ chamada Relogio para armazenar um horário, 
composto por hora, minuto e segundo. A classe deve representar esses componentes de horário e 
deve apresentar os métodos descritos a seguir:

* um método chamado setHorario, que deve receber o horário desejado por parâmetro (hora, minuto 
e segundo);

* um método chamado getHorario para retornar o horário atual, através de 3 variáveis passadas por
 referência;

* um método chamado tick para avançar o horário para o próximo segundo (lembre-se de atualizar o 
minuto e a hora, quando for o caso).

*/

#pragma once

class Relogio
{
	int hora;
	int min;
	int seg;
public:
	Relogio()
		: hora{ 0 }  // inicializado com zero
		, min{ 0 }
		, seg{ 0 }
	{
	}
	void setHorario(int hora, int min, int seg);
	void getHorario(int& hora, int& min, int& seg) const;
	void tick();
};