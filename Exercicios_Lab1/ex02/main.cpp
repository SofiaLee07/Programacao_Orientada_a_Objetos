#include <iostream>
class Elevador{
 int andar=0,total,capacidade,pessoas=0;
public:
 Elevador(int c,int t):total(t),capacidade(c){}
 bool entra(){if(pessoas<capacidade){pessoas++;return true;}return false;}
 bool sai(){if(pessoas>0){pessoas--;return true;}return false;}
 bool sobe(){if(andar<total){andar++;return true;}return false;}
 bool desce(){if(andar>0){andar--;return true;}return false;}
 void status(){std::cout<<"Andar:"<<andar<<" Pessoas:"<<pessoas<<"\n";}
};
int main(){Elevador e(4,10);e.entra();e.sobe();e.status();return 0;}