/*
3) Control de longitud de mensaje
Situación:
Un SMS tiene límite de caracteres.
Consigna:
• Pedir mensaje
• Mostrar cantidad de caracteres
• Informar si supera los 50 caracteres
*/

#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char sms[200]; 
	int large = 0;
	cout<<"ingrese su mensaje: "<<endl;
	cin>>sms;
	cout<<"nuevo mensaje";
	if(strlen(sms) > 50 ) {
	cout<<"--ATENCION--"<<endl<<"mensaje de mas de 50 caracteres: "<<endl;
	}
	cout<<sms<<"(tamaño del mensaje:"<<strlen(sms)<<")";
}