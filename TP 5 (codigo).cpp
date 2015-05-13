#include <iostream>

using namespace std;

double num,b,h;

double getNumPositivo(){
	
	cin>>num;
	
	if(num<0)
	num=num*(-1);
	
	return num;
}

double getPerimetro(double base, double altura){
	
	return (2*(base+altura));
}

int main(){
	
	cout<<"\n\tPERIMETRO DE UN RECTANGULO";
	cout<<"\n\t--------------------------\n";
	cout<<"\n\tIngrese la base: ";
	b=getNumPositivo();
	cout<<"\n\tIngrese la altura: ";
	h=getNumPositivo();
	cout<<"\n ======================================";
	cout<<"\n\n\tBase: "<<b<<" // Altura: "<<h;
	cout<<"\n\n\tEl perimetro es: "<<getPerimetro(b,h);
	cout<<"\n\n";
	
}
