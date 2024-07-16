#include <iostream>
#include <cstring>
using namespace std;

struct persona{
		string nombre;
		int edad;
		string DNI;
};

int main(){
	double sum = 0, p50 = 0, prom = 0;
	int n;
	cout<<"Ingrese la cantidad de personas: "; cin>>n;
	persona datos_persona[n];
	for(int i = 0; i < n; i++){
		cout<<"Ingresar datos de la persona: "<<i+1<<endl;
		cout<<"Nombre "<<i+1<<endl;
		cin.ignore();
		getline(cin, datos_persona[i].nombre); 
		cout<<"Edad  "<<i+1<<endl; cin>>datos_persona[i].edad;
		cout<<"DNI  "<<i+1<<endl; cin>>datos_persona[i].DNI;
		if(datos_persona[i].edad > 50 ){
			p50++;
			}
		sum += datos_persona[i].edad;
	}
	prom = sum/n;
	cout<<"Cantidad de personas mayores a 50 anos es: "<<p50<<endl;
	cout<<"Promedio de edades: "<<prom<<endl;
	for(int X = 0; X < n; X++){
		cout<<"NOMBRE: "<<datos_persona[X].nombre<<endl;
		cout<<"EDAD: "<<datos_persona[X].edad<<endl;
		cout<<"DNI: "<<datos_persona[X].DNI<<endl;
	}
	return 0;
}
