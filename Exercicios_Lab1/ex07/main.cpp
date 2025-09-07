#include <iostream>
class Carro{
 double tanque=0,km=0; static constexpr double MAX=50; static constexpr double kmpl=15;
public:
 void abastecer(double l){tanque+=l;if(tanque>MAX)tanque=MAX;}
 bool mover(double d){double nec=d/kmpl; if(nec<=tanque){tanque-=nec;km+=d;return true;}return false;}
 void status(){std::cout<<"Km:"<<km<<" Comb:"<<tanque<<"\n";}
};
int main(){Carro c; c.abastecer(20);c.mover(100);c.status();return 0;}