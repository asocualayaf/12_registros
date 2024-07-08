#include<iostream>
#include<cstring>
using namespace std;

struct empleado{
		char nombre[60];
		char sexo[30];
		double salario;
};

	
int main(){
	char nmin[60], smin[30], nmax[60], smax[30];
	double max, min;
	int n;
	cout<<"Ingrese la cantidad de empleados: "; cin>>n;
	empleado datos_empleado[n];
	for(int i = 0; i < n; i++){
		cout<<"Ingrese el nombre del trabajador "<<i+1<<endl; cin>>datos_empleado[i].nombre;
		cout<<"Ingrese el sueldo del trabajador "<<i+1<<endl; cin>>datos_empleado[i].salario;
		cout<<"Ingrese el sexo del trabajador "<<i+1<<endl; cin>>datos_empleado[i].sexo;
	}
	//hallando minimo
	min = datos_empleado[0].salario;
	for(int x = 0; x < n; x++){
		if(datos_empleado[x].salario < min){
			min = datos_empleado[x].salario;
			strcpy(nmin, datos_empleado[x].nombre);
			strcpy(smin, datos_empleado[x].sexo);
		} 	
	}
	//Hallando maximo
	max = datos_empleado[0].salario;
	for(int y = 0; y < n; y++){
		if(datos_empleado[y].salario > max){
			max = datos_empleado[y].salario;
			strcpy(nmax, datos_empleado[y].nombre);
			strcpy(smax, datos_empleado[y].sexo);
		} 	
	}
	
	cout<<"datos de la persona con menor salario: "<<endl;
	cout<<"Nombre: "<<nmin<<endl;
	cout<<"sexo: "<<smin<<endl;
	cout<<"Salario: "<<min<<endl;
	
		cout<<"datos de la persona con mayor salario: "<<endl;
	cout<<"Nombre: "<<nmax<<endl;
	cout<<"sexo: "<<smax<<endl;
	cout<<"Salario: "<<max<<endl;
	
	return 0;
}