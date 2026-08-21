#include <iostream>
#include <string>
using namespace std;

void saludar(string nombre);
void saludar(string name, char saludo[50]);

int main() {
    string nombre;
	char saludocustom[50];
    int r;
	cout << "Cual es tu nombre: " << endl;
    cin >> nombre;
	
	cout<<"desea realizar un saludo custom?: ";
	cout<<"ingrese 1 si la respuesta es si: ";
	cin>>r;
	
	if (r==1){
		fflush(stdin);
		cout<<"ingrese su saludo: ";
		cin.getline(saludocustom,50,'\n');
	
		saludar(nombre, saludocustom);
	}
	
	else {
    saludar(nombre);		
	}
	

}
void saludar(string nombre) {
    cout << "hola " << nombre << endl;
}
void saludar(string name, char saludo[50]){
	
	cout<<saludo<<" "<<name;
}