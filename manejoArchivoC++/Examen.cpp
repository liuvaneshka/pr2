#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;

	int main (){
			int i=0;
		
		string cedula, nombre, numero;
		ifstream archivoData;
		ofstream archivoTarea1;
		ofstream archivoTarea2;
		ofstream archivoTarea3;
		archivoData.open("datos.txt");
		archivoTarea1.open("Tarea1.txt");
		archivoTarea2.open("Tarea2.txt");
		archivoTarea3.open("Tarea3.txt");

		while(!archivoData.eof()){
			getline(archivoData, cedula,':');
			getline(archivoData, nombre,':');
			getline(archivoData, numero);	
	
			if(archivoData.fail()){
				break;
					}

			int CI = atoi(cedula.c_str());
	
			if(CI%5==0){

			i++;

			archivoTarea1 << cedula << ':' << nombre <<':'<< numero << endl;	
			}
			

			

			int NU = atoi(numero.c_str());

			if (NU<=25 ){
			         archivoTarea2 << cedula << ':' << nombre <<':'<< numero << endl;
				}

			if(!(CI%5==0) && !(NU<=25)){
		
			         archivoTarea3 << cedula << ':' << nombre <<':'<< numero << endl;
			};
		
		}
			cout<<i<<endl;

		archivoData.close();
		archivoTarea1.close();
		archivoTarea2.close();
		archivoTarea3.close();

	return 0;
}
