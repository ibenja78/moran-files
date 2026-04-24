/*
5) Generador de códigos inteligentes
Situación:
Un depósito genera códigos tipo: PROD-JUAN-001

Consigna:
• Pedir nombre del producto y del operador
• Convertir operador a mayúsculas
• Generar código concatenando todo
• Ejemplo: "PROD-" + operador + "-001"
*/

#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char prod[30], op1[20], text[]="001", guion[]="-";
	cout<<"ingrese el nombre del producto "<<endl;
	cin>>prod;
	cout<<"ingrese el nombre del op"<<endl;
	cin>>op1;
	strupr (op1);
	strcat (prod,guion);
	strcat (prod,op1);
	strcat (prod,guion);
	strcat (prod, text);
	cout<<prod;
}