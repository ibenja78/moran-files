/*
3)Crear una estructura Empleado con:
nombre
sueldo
Cargar 5 empleados y mostrar:
sueldo más alto
nombre del empleado con mayor sueldo
*/
#include <iostream>
#include <string.h>

using namespace std;
struct estructura {
    char nombre[30];
    int sueldo=0;
}empresa[5];

int main() {

    for(int i = 0; i < 5; i++) {
        cout << "Ingrese el nombre del empleado " << i + 1 << ": ";
        cin >>empresa[i].nombre;

        cout << "Ingrese el sueldo: ";
        cin >> empresa[i].sueldo;
        
        cout << endl;
    }

    int mayor = 0;

    for(int i = 1; i < 5; i++) {
        if(empresa[i].sueldo > empresa[mayor].sueldo) {
            mayor = i;
        }
    }

    cout << "El empleado con mayor sueldo es: "<<empresa[mayor].nombre<<endl<<"sueldo: "<<empresa[mayor].sueldo;
    
}
