#include <iostream>
#include <string>
#include <string.h>

using namespace std;

struct domicilio {
	char ciudad[20];
	char calle[20];
};

struct rendimiento{
	char sucursal[30];
	int sueldo;	
};

struct venta_anual{
	float meses[12];
};

struct DATOS {
	char name[20];
	char lastname[20];
	struct fecha_nacimiento{
	int dia;
	int mes;
	int anio;
	}FN;
	int id;
	domicilio DOM;
	rendimiento REN;
	venta_anual VA;
}datasos[5];

int main () {
	
	
	for (int i; i<5; i++){
		fflush(stdin);
		cout<<"ingrese el nombre del empleado: ";
			cin.getline(datasos[i].name,20,'\n');
		cout<<"ingrese el apellido del empleado: ";
			cin.getline(datasos[i].lastname,20,'\n');
		cout<<"ingrese el ID del empleado: ";
			cin>>(datasos[i].id);
		cout<<"ingrese el anio de nacimiento del empleado: ";
			cin>>(datasos[i].FN.anio);
		cout<<"ingrese el numero de mes de nacimiento del empleado: ";
			cin>>(datasos[i].FN.mes);		
		cout<<"ingrese el dia de nacimiento del empleado: ";
			cin>>(datasos[i].FN.dia);
	fflush(stdin);
		cout<<"ingrese la ciudad de residencia del empleado: ";
			cin.getline(datasos[i].DOM.ciudad,20, '\n');
		cout<<"ingrese el domicilio del empleado: ";
			cin.getline(datasos[i].DOM.calle,20, '\n');
	fflush(stdin);	 
		cout<<"ingrese la sucursal del empleado: ";
			cin.getline(datasos[i].REN.sucursal,20,'\n');
		cout<<"ingrese el sueldo del empleado: ";
			cin>>(datasos[i].REN.sueldo);
	fflush(stdin);	 	 
		cout<<"**DATOS DE VENTA ANUAL**"<<endl;
			for(int j=0; j<12; j++){
				cout<<"ingrese las ventas del mes: "<<j+1<<" : ";
					cin>>(datasos[i].VA.meses[j]);
			}
	}
	
	float suma=0;
	
	for(int i=0; i<5; i++){
		cout<<endl<<"**----EMPLEADO "<<i+1<<"----**";
		cout<<"Nombre del empleado: "<<datasos[i].name<<endl;
		cout<<"Apellido del empleado: "<<datasos[i].lastname<<endl;
		cout<<"ID del empleado: "<<datasos[i].id<<endl;
		
		cout<<endl<<"*FECHA DE NACIMIENTO*";
			cout<<"Dia: "<<datasos[i].FN.dia<<endl;
			cout<<"Mes: "<<datasos[i].FN.mes<<endl;		
			cout<<"Anio: "<<datasos[i].FN.anio<<endl;		
		
		cout<<endl<<"*SUCURSAL Y SUELDO*";
			cout<<"Sucursal: "<<datasos[i].REN.sucursal<<endl;
			cout<<"sueldo: "<<datasos[i].REN.sueldo<<endl;
		
		
		cout<<endl<<"**VENTA ANUAL**";
		for(int j=0; j<12; j++){
			cout<<"ventas del mes "<<j<<" : "<<datasos[i].VA.meses[j]<<endl;
			suma=suma+datasos[i].VA.meses[j];
		}	
		cout<<"suma total: "<<suma<<endl;
		fflush(stdin);
	}
	return 0;
	} 
