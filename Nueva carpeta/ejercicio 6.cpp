/* 6) Factura con validaciones
Situación:
Sistema de facturación simple.
Consigna:
• Pedir nombre del cliente
• Pedir tipo de pago: "efectivo" o "tarjeta"
• Pedir monto (texto)
• Convertir monto (atof)
• Si es tarjeta, sumar 10%
• Armar mensaje final concatenado
*/
#include<iostream>
#include<string.h>
#include <stdlib.h>
using namespace std;
int main (){
	char name[20];
	char ans[1];
	char type1[]="t";
	char monto_txt[5];
	float monto_pr=0;
	float monto_total=0;
	
	cout<<"ingrese el nombre del cliente: ";
	cin>>name;
	cout<<"ingrese el precio del producto: ";
	cin>>monto_txt;
	monto_pr = atoi(monto_txt);
	cout<<"con que desea pagar? ingrese 't' para tarjeta";
	cin>>ans;
	if (strcmp(ans,type1) == 0) {
		monto_total= monto_pr+(monto_pr / 10 *100);
		cout<<"valor del 10% aplicado"<<endl;
	}	
	else{
		monto_total = monto_pr;
		cout<<"pago en efectivo: "<<endl;
	}
	cout<<"--TICKET--"<<endl;
	cout<<"cliente: "<<name<<endl;
	cout<<"Tipo de pago: "<<endl;
		if (strcmp(ans,type1) == 0) {
		cout<<"Tarjeta"<<endl;
	}	
	else{
		cout<<"efectivo "<<endl;
	}
	cout<<"monto: "<<monto_total;
}