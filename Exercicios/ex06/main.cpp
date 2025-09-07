#include <iostream>
class Ar{
 int pot=0; double text=25;
public:
 void setPot(int p){if(p>=0&&p<=10)pot=p;}
 void setText(double t){text=t;}
 double ambiente(){return text - pot*1.8;}
};
int main(){Ar a1,a2; a1.setText(25);a1.setPot(5);a2.setText(31);a2.setPot(10);
 std::cout<<"Amb1:"<<a1.ambiente()<<" Amb2:"<<a2.ambiente()<<"\n";return 0;}