#include <iostream>
class TV{
 int vol=10,canal=1;
public:
 void maisVol(){if(vol<100)vol++;}
 void menosVol(){if(vol>0)vol--;}
 void maisCanal(){if(canal<75)canal++;}
 void menosCanal(){if(canal>0)canal--;}
 void setCanal(int c){if(c>=0 && c<=75)canal=c;}
 void status(){std::cout<<"Canal:"<<canal<<" Volume:"<<vol<<"\n";}
};
int main(){TV t; t.maisVol();t.setCanal(12);t.status();return 0;}