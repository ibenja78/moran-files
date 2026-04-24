/*
2) Generar nombre completo
Situación:
Una app arma automáticamente el nombre completo del usuario.
Consigna:
• Pedir nombre y apellido
• Unirlos en una sola cadena con un espacio
• Mostrar: “Juan Perez”
*/

#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char name[10]; 
	char lastname[10];
	
	cout<<"ingrese el nombre del usuario: "<<endl;
	cin>>name;
	cout<<"ingrese el apellido del usuario: "<<endl;
	cin>>lastname;
	
	strcat(name,lastname);
	
	cout<<"nombre del usuario: "<<name;
}