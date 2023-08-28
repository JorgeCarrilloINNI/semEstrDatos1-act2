#include<iostream>
#include<string>

using namespace std;

class Empleado{
	private:
		int ClaveEmpleado;
		string Nombre;
		string Domicilio;
		float Sueldo;
		string ReportaA;
	public:
		Empleado(int C, string N, string D, float S, string R): ClaveEmpleado(C), Nombre(N), Domicilio(D), Sueldo(S), ReportaA(R){}
		
		void Imprime(){
			cout<<"*****Empleado*****"<<endl;
			cout<<"Clave: "<<ClaveEmpleado<<endl;
			cout<<"Nombre: "<<Nombre<<endl;
			cout<<"Domicilio: "<<Domicilio<<endl;
			cout<<"Sueldo: "<<Sueldo<<endl;
			cout<<"Reporta A: "<<ReportaA<<endl;
		}
		void CambiaDomicilio(string domicilio){
			Domicilio = domicilio;
		}
		void CambiaReportaA(string nombre){
			ReportaA = nombre;
		}
		void ActualSueldo(float Incremento){
			Sueldo = Sueldo + ((Sueldo*Incremento)/100);
		}
		int clave(){
			return ClaveEmpleado;
		}
		
};

int main(){
	Empleado JefePlanta(1, "Pancracio", "Calle Imaginaria", 5500, "Amigue"), JefePersonal(2, "Patroclo", "Grecia", 10000, "Menecio");
	int opcion, clave;
	string Domicilio, Reporta;
	float Sueldo;
	
	while(opcion != 5){
		cout<<"*****Menu*****"<<endl;
		cout<<"1.- Cambiar Domicilio"<<endl;
		cout<<"2.- Cambiar Reportar A"<<endl;
		cout<<"3.- Incrementar Sueldo"<<endl;
		cout<<"4.- Mostrar Empleado"<<endl;
		cout<<"5.- Salir"<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opcion;
		switch(opcion){
			case 1:
				cout<<"Ingrese la clave: ";
				cin>>clave;
				if(clave == JefePlanta.clave()){
					cout<<"Ingrese el nuevo domicilio: ";
					cin.ignore();
					getline(cin, Domicilio);
					JefePlanta.CambiaDomicilio(Domicilio);
				}else if(clave == JefePersonal.clave()){
					cout<<"Ingrese el nuevo domicilio: ";
					cin.ignore();
					getline(cin, Domicilio);
					JefePersonal.CambiaDomicilio(Domicilio);
				}else
					cout<<"No se encontro la clave"<<endl;
				break;
			case 2:
				cout<<"Ingrese la clave: ";
				cin>>clave;
				if(clave == JefePlanta.clave()){
					cout<<"Ingrese el nuevo Reporta A: ";
					cin>>Reporta;
					JefePlanta.CambiaReportaA(Reporta);
				}else if(clave == JefePersonal.clave()){
					cout<<"Ingrese el nuevo Reporta A: ";
					cin>>Reporta;
					JefePersonal.CambiaReportaA(Reporta);
				}else
					cout<<"No se encontro la clave"<<endl;
				break;
			case 3:
				cout<<"Ingrese la clave: ";
				cin>>clave;
				if(clave == JefePlanta.clave()){
					cout<<"Ingrese el incremento: ";
					cin>>Sueldo;
					JefePlanta.ActualSueldo(Sueldo);
				}else if(clave == JefePersonal.clave()){
					cout<<"Ingrese el incremento: ";
					cin>>Sueldo;
					JefePersonal.ActualSueldo(Sueldo);
				}else
					cout<<"No se encontro la clave"<<endl;
				break;
			case 4:
				cout<<"Ingrese la clave: ";
				cin>>clave;
				if(clave == JefePlanta.clave()){
					JefePlanta.Imprime();
				}else if(clave == JefePersonal.clave()){
					JefePersonal.Imprime();
				}else
					cout<<"No se encontro la clave"<<endl;
				break;
			case 5:
				cout<<"Saliendo"<<endl;
				break;
			default:
				cout<<"Elija una opcion valida "<<endl;
				break;
		}
	}
	return 0;
}
