#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char prod1[50], prod2[20], guion[] = "-";
	cout<<"ingrese el primer producto: ";
	cin>>prod1;
	cout<<"ingrese el segundo producto: ";
	cin>>prod2;
	
	strcat(prod1,guion);
	strcat(prod1,prod2);
	
	cout<<"productos comprados: "<<prod1;
}