/*  Leer circulos y mostrar los mayores a la media. 

*/

#include <iostream> 
#include <math.h>

struct punto2d {
	
	double x , y;
};

struct circulo {
	double radio;
	punto2d centro;
	
};


using namespace std;


istream&  LeerCirculo (circulo &c);
double    GetPerimetro(const circulo &c);


int main() {
	
circulo c;
double  b[100];	
int p,i ;
double sumatoriaper  , perimetromedio , a;		

sumatoriaper=0;
p=0;	
i=0;


cout<< "ingrese el radio , el valor de ´y´ y el valor de ´x´ apretando enter despues de cada uno" << endl;


	
while (LeerCirculo (c)){
	
	a=GetPerimetro(c);
	
    b[i] = a;
	
	sumatoriaper= sumatoriaper + a ;
	

	
	++p;
	++i;
	cout<< "ingrese el radio , el valor de ´y´ y el valor de ´x´ apretando enter despues de cada uno" << endl;
	
}	

perimetromedio= (sumatoriaper)/p;

for (int i=p ; i>=0 ; i--)

     if (b[i] > perimetromedio){
	 
     
     cout<< b[i] << endl;
}
	
}





istream& LeerCirculo(circulo &c) {
	
     return cin>> c.radio >> c.centro.y >> c.centro.x;
}

double GetPerimetro (const circulo &c){


return (M_PI)*2*(c.radio);
}
