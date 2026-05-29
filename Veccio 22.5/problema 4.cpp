#include <iostream>
#include <string.h>

using namespace std;
struct Producto {
    char titulo[30];
    char autor[20];
    int cantpag=0;
}libros[2];

int main() {

    for(int i = 0; i < 2; i++) {
        cout << "Ingrese el titulo del libro " << i + 1 << ": ";
        cin.getline(libros[i].titulo,30);

        cout << "Ingrese el autor: ";
        cin.getline(libros[i].autor,20);

        cout << "Ingrese cantidad de paginas: ";
        cin>>libros[i].cantpag;

        cout << endl;
        fflush(stdin);
    }

    int mayor = 0;

    for(int i = 1; i < 3; i++) {
        if(libros[i].cantpag > libros[mayor].cantpag) {
            mayor = i;
        }
    }

    cout << "El libro con mayor cantidad de paginas es: "<< libros[mayor].titulo << endl;
    cout << "cantidad de paginas: " << libros[mayor].cantpag << endl;
    cout << "autor: " << libros[mayor].autor << endl;

    return 0;
}