#include <iostream>
#include <cmath>
using namespace std;

int suma(int a, int b);

int resta(int a, int b);

int multi(int a, int b);

int divis(int a, int b);

int poten(int a, int b);

main () {
	int n1;
	int n2;
	int opcion;

	cout<<"ingrese un numero: ";
	cin>>n1;
	
	cout<<"ingrese otro numero: ";
	cin>>n2;
	
	cout<<"---CALCUCLADORA---"<<endl;
	cout<<"1- Suma"<<endl;
	cout<<"2- Resta"<<endl;
	cout<<"3- Multiplicacion"<<endl;
	cout<<"4- Division"<<endl;
	cout<<"5- Potenciacion"<<endl;
	cout<<"Elija una Opcion: _";
	cin>>opcion;
	
	switch (opcion) {
		case 1:
			cout<<" resultado: "<<suma(n1, n2);
			break;
		case 2: 
			cout<<" resultado: "<<resta(n1,n2);
			break;
		case 3: 
			cout<<" resultado: "<<multi(n1,n2);
			break;
		case 4: 
			cout<<" resultado: "<<divis(n1,n2);
			break;
		case 5: 
			cout<<" resultado: "<<poten(n1,n2);
			break;
	}
}

int suma(int a, int b){
	return a+b;
}
int resta(int a, int b){
	return a-b;
}
int multi(int a, int b){
	return a*b;	
	
}
int divis(int a, int b){
	return (float)a/b;
}
int poten(int a, int b){
	return pow(a, b);
}