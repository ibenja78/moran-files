#include <iostream>
#include <string.h>
using namespace std;

void despedir(char name[20]);

main(){
	char nombre1[20];
	char nombre2[20];
	cout<<"ingrese su nombre";
	cin.getline(nombre1,20,'\n');
	
	despedir(nombre1);
}

void despedir(char name[20]) {
	cout<<"Chau "<<name;
	
}


