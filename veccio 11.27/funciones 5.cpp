#include <iostream>
#include <cmath>
using namespace std;

void duplicar (int &a);

main() {
	
	int num;
	cout<<"intenta modificar el numero: ";
	cin>>num;
	
	duplicar(num);
}

void duplicar (int &a) {
	a=8;	
  cout<<"Numero duplicado: "<<a*2;;
}
