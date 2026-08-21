#include <iostream>
using namespace std;

void minmax(int a, int b, int c, int &min, int &max);



main () {
	int n1, n2, n3, mino=-1, maxi=2147483647;
	
	cout<<"ingrese un numero: ";
	cin>>n1;
	cout<<"ingrese otro numero: ";
	cin>>n2;	
	cout<<"ingrese otro numero: ";
	cin>>n3;	
	
	minmax(n1, n2, n3,mino,maxi);
	
}

void minmax (int a, int b, int c, int &min, int &max) {
	
int numeros[3] = {a, b, c};
	
min = numeros[0];
max = numeros[0];

for (int i = 1; i < 3; i++) {
    if (numeros[i] < min) {
        min = numeros[i];
    }

    if (numeros[i] > max) {
        max = numeros[i];
    }
}

cout<<"el numero mayor es: "<<max<<endl;
cout<<"el numero menor es: "<<min<<endl;
}