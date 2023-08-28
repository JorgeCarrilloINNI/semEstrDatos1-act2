#include<iostream>
#include<string>

using namespace std;

class Materia{
	private:
		int Clave;
		string Nombre;
		string ProfesorTit;
		string LibroTexto;
	public:
		Materia(int C, string N, string P, string L): Clave(C), Nombre(N), ProfesorTit(P), LibroTexto(L){};
		
		void Imprime(){
			cout<<"*********"<<endl;
			cout<<"*Materia*"<<endl;
			cout<<"Clave: "<<Clave<<endl;
			cout<<"Nombre: "<<Nombre<<endl;
			cout<<"Profesor Titular : "<<ProfesorTit<<endl;
			cout<<"Libro Texto: "<<LibroTexto<<endl;
			cout<<"*********"<<endl;
		}
		void CambiaClave(int clave){
			Clave = clave;
		}
		void CambiaProfe(string profe){
			ProfesorTit = profe;
		}
};

int main(){
	Materia Programacion(1, "Programacion", "Cain", "Como Programar"), BasesDatos(2, "Bases De Datos", "Francisco", "Bases de datos Relacionales");
	int opcion, clave;
	string nombre;
	
	while(opcion != 4){
		cout<<"*****Menu*****"<<endl;
		cout<<"1.- Cambiar la clave de la materia Programacion"<<endl;
		cout<<"2.- Cambiar el nombre del maestro de Bases de Datos"<<endl;
		cout<<"3.- Mostrar todos los datos de la materia DB"<<endl;
		cout<<"4.- Salir"<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"Ingrese la nueva clave: ";
				cin>>clave;
				Programacion.CambiaClave(clave);
				break;
			case 2:
				cout<<"Ingresa el nuevo nombre del maestro para DB: ";
				cin.ignore();
				getline(cin, nombre);
				BasesDatos.CambiaProfe(nombre);
				break;
			case 3:
				BasesDatos.Imprime();
				break;
			case 4:
				cout<<"Saliendo...";
				break;
			default:
				cout<<"Ingrese una opcion valida"<<endl;
				break;
		}
	}
	
	return 0;
}