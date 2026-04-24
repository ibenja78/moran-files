/*7) Generador de email
Situación:
Una empresa genera emails automáticamente.
Consigna:
• Pedir nombre y apellido
• Convertir a minúsculas
• Generar email: nombre.apellido@empresa.com 
*/

#include <iostream>
using namespace std;
	int main (){
	char name[50], lastname[10], email[] = "@gmail.com";
	
	cout<<"ingrese el nombre del usuario: "<<endl;
	cin>>name;
	cout<<"ingrese el apellido del usuario: "<<endl;
	cin>>lastname;
	
	strcat(name,lastname);
	strlwr(name);
	strcat(name,email);
	
	cout<<"email generado: "<<name;
	}