#include <iostream>
#include <cmath>
class Circulo{
 double raio=0,x=0,y=0;
 double area(){return M_PI*raio*raio;}
public:
 void setRaio(double r){raio=r;}
 void setCentro(double X,double Y){x=X;y=Y;}
 void print(){std::cout<<"Raio:"<<raio<<" Centro:("<<x<<","<<y<<") Area:"<<area()<<"\n";}
};
int main(){Circulo c; c.setRaio(2); c.setCentro(0,0); c.print(); return 0;}