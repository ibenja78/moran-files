#include <iostream>
#include <string.h>

using namespace std;

struct producto { 
	char nombre[30];
	float precio;
};

struct venta{
	int cantidad;
	char name_seeler[30];
	producto PROD;
}ventas[2];

main() {
	float suma=0;
	for (int i=0; i<2; i++){
		cout<<"ingrese el nombre del vendedor: ";
			cin.getline(ventas[i].name_seeler,30,'\n');
		cout<<"ingrese la cantidad";
			cin>>ventas[i].cantidad;
		cout<<"Ingrese el precio del producto: ";
			cin>>ventas[i].PROD.precio;
		cout<<"ingrese el nombre del producto: ";
			cin>>ventas[i].PROD.nombre,30,'\n';
		suma=suma+ventas[i].PROD.precio;
		fflush(stdin);
	}
	for (int i=0; i<2; i++){
		cout<<"ingrese el nombre del vendedor: "<<ventas[i].name_seeler<<endl;
		cout<<"ingrese la cantidad"<<ventas[i].cantidad<<endl;
		cout<<"Ingrese el nombre del producto: "<<ventas[i].PROD.nombre<<endl;
		cout<<"ingrese el precio del producto: "<<ventas[i].PROD.precio<<endl;
	}
	cout<<"total del dia"<<suma+suma*0.10;
}