/*
Liu gutierrez
Universidad de los andes
PR2 sec 03
2.- Encontrar la cantidad de palabras cuya longitud sea menor o igual a 5 caracteres. (10 puntos)
*/
#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;

	int main (){
			int i=0;
			int q=0;
		
		string palabra;
		ifstream archivo;
		archivo.open("archivo.txt");

		while(!archivo.eof()){
			getline(archivo,palabra,' ');

			if(archivo.fail()){
				cout<<"el archivo no abrio"<<endl;
				return 1;
					}

 			if(palabra=="Office"){
				i++;
			}
			
			if(palabra.length()<=5){
			q++;	
			}

		}
		cout<<"la palabra Oficce aparece: "<<i<<" veces "<<endl;
		cout<<"Palabras con 5 o menos caracteres: "<< q <<endl;


		archivo.close();

	return 0;
}
