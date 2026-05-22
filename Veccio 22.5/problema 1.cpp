/*
1)Crear una estructura Producto con:
nombre
precio
stock
Cargar 3 productos y mostrar cuál tiene mayor precio.
*/
#include <iostream>
#include <string.h>

using namespace std;
struct Producto {
    char nombre[30];
    float precio;
    int stock;
}productos[3];

int main() {

    for(int i = 0; i < 3; i++) {
        cout << "Ingrese el nombre del producto " << i + 1 << ": ";
        cin >> productos[i].nombre;

        cout << "Ingrese el precio: ";
        cin >> productos[i].precio;

        cout << "Ingrese el stock: ";
        cin >> productos[i].stock;

        cout << endl;
    }

    int mayor = 0;

    for(int i = 1; i < 3; i++) {
        if(productos[i].precio > productos[mayor].precio) {
            mayor = i;
        }
    }

    cout << "El producto con mayor precio es: "<< productos[mayor].nombre << endl;
    cout << "Precio: $" << productos[mayor].precio << endl;
    cout << "Stock: " << productos[mayor].stock << endl;

    return 0;
}
