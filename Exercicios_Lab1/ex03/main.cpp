#include <iostream>
#include <iomanip>
class Relogio{
 int h=0,m=0,s=0;
 void normalizar(){int t=h*3600+m*60+s; t=(t%(24*3600)+24*3600)%(24*3600);
 h=t/3600; m=(t%3600)/60; s=t%60;}
public:
 void setHorario(int H,int M,int S){h=H;m=M;s=S;normalizar();}
 void tick(){s++;normalizar();}
 void imprimir(){std::cout<<std::setfill('0')<<std::setw(2)<<h<<":"<<std::setw(2)<<m<<":"<<std::setw(2)<<s<<"\n";}
};
int main(){Relogio r; r.setHorario(23,59,58); r.imprimir(); r.tick(); r.imprimir(); r.tick(); r.imprimir();return 0;}