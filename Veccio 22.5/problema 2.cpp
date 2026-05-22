#include <iostream>
#include <string.h>

using namespace std;
struct AUTO {
    char marca[10];
    char modelo[10]; 
	int anio;
    int nuevo = 0;
};

int main() {

    AUTO autos[3];

    for(int i = 0; i < 3; i++) {
        cout << "Ingrese la marca del auto " << i + 1 << ": ";
        cin >> autos[i].marca;

        cout << "Ingrese el modelo del auto: ";
        cin >> autos[i].modelo;

        cout << "Ingrese el anio de salida: ";
        cin >> autos[i].anio;
        
		if(autos[i].anio > 2020){
            autos[i].nuevo = 1;
        }
        cout << endl;
        fflush(stdin);
    }


	    cout << " -- AUTOS LANZADOS DESPUES DEL 2020 -- "<<endl;			

    for(int i = 1; i < 3; i++) {
		if (autos[i].nuevo == 1){
			
		cout<<autos[i].marca << endl;
		cout<<autos[i].modelo << endl;
		cout<<autos[i].anio << endl;
		}
    }

  }
