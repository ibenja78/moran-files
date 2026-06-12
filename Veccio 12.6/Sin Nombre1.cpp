#include <iostream>
#include <string>
#include <string.h>

using namespace std;

struct persona {
	char name[20];
	int lastname[20];
	int edad;	
	char direccion[50];
	int telefono;
}sujetos[5];

int main () {
	for (int i=0; i<5; i++) {
		cout<<"ingrese nombre del empleado "<<i<<" : ";	
			cin.getline(sujetos[i].name,20,'\n');
		cout<<"ingrese apellido del empleado "<<i<<" : ";	
			cin.getline(sujetos[i].lastname,20,'\n');
		cout<<"ingrese edad del empleado "<<i<<" : ";	
			cin.getline(sujetos[i].edad);
		cout<<"ingrese direccion del empleado "<<i<<" : ";	
			cin.getline(sujetos[i].name,50,'\n');		
		cout<<"ingrese telefono del empleado "<<i<<" : ";	
			cin.getline(sujetos[i].telefono);
	}
	for (int i=0; i<5; i++){
		cout<<"**DATOS DE LOS USUARIOS**";
		
	}
}
