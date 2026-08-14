#include <iostream>
using namespace std;

void cuadrado(int larglado);

main () {
	int lado;
	
	cout<<"ingrese el lado del cuadrado: ";
	cin>>lado,
	
	cuadrado(lado);
}


void cuadrado(int larglado){
	
	cout<<"perimetro: "<<larglado*4<<endl;
	cout<<"superficie: "<<larglado*larglado<<" metros cuadrados"<<endl;
}