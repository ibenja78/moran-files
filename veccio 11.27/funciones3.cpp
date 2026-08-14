#include <iostream>
#include <cmath>
using namespace std;

void multi (int a);

main() {
	int num ;
	cout<<"ingrese el numero que desea saber la tabla: ";
	cin>>num;
	
	multi(num);
}

void multi(int a){
	cout<<a<<" x 1: "<<a*1<<endl;
	cout<<a<<" x 2: "<<a*2<<endl;
	cout<<a<<" x 3: "<<a*3<<endl;
	cout<<a<<" x 4: "<<a*4<<endl;
	cout<<a<<" x 5: "<<a*5<<endl;
	cout<<a<<" x 6: "<<a*6<<endl;
	cout<<a<<" x 7: "<<a*7<<endl;
	cout<<a<<" x 8: "<<a*8<<endl;
	cout<<a<<" x 9: "<<a*9<<endl;
	cout<<a<<" x 10: "<<a*10<<endl;	
}