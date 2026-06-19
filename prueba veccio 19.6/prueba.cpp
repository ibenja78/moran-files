
#include <iostream>
#include <string.h>

using namespace std;

struct departamento { 
	int depto;
	int piso;
};

struct empleado{
	int legajo;
	char name[30];
	float sueldo=0;
	departamento DEP;
}empleados[2];


main() {
	int mayor = -1;
	int mjsueldo;
	for (int i=0; i<2; i++){
		cout<<"ingrese el nombre del empleado: ";
			cin.getline(empleados[i].name,30,'\n');
		cout<<"ingrese su numero de legajo: ";
			cin>>empleados[i].legajo;
		cout<<"Ingrese el sueldo del empleado: ";
			cin>>empleados[i].sueldo;
			if (empleados[i].sueldo > mayor)
				mjsueldo=i;
		cout<<"ingrese el numero del departamento: ";
			cin>>empleados[i].DEP.depto;
		cout<<"ingrese su piso: ";
			cin>>empleados[i].DEP.piso;
		fflush(stdin);
	}
	for (int i=0; i<2; i++){
		cout<<"Empleado: "<<empleados[i].name<<endl;
		cout<<"Numero de legajo: "<<empleados[i].legajo<<endl;
		cout<<"Sueldo del empleado: "<<empleados[i].sueldo<<endl;
		cout<<"Numero del departamento: "<<empleados[i].DEP.depto<<endl;
		cout<<"Piso: "<<empleados[i].DEP.piso<<endl;
	}
	cout<<"empleado de mayor sueldo"<<empleados[mjsueldo].name;
}