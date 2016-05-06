/*
 * biblioteca1.h
 *
 *  Created on: 6/05/2016
 *      Author: DIEGO
 */

#ifndef BIBLIOTECA1_H_
#define BIBLIOTECA1_H_


#include<iostream>
#include<stdlib.h>
using namespace std;


#endif /* BIBLIOTECA1_H_ */

struct Estudiante{
	char* nombre;
	int edad;
	int nota;
	int informacion;
	Estudiante *siguiente;
};

 void  agregar(){
	Estudiante est1;
	Estudiante *tope;
    Estudiante *nuevo;
   est1.siguiente= NULL;
	int archivo;
	int cantidad;
	int x=0;
	cout<<"ingrese la cantidad de nodos"<<endl;
	cin>>cantidad;
	while(x!=cantidad)

	{
		nuevo =(struct Estudiante *)malloc(sizeof(struct Estudiante));
		nuevo->siguiente = tope;
		cout<<"ingrese el dato"<<endl;
		cin>>archivo;
		nuevo->informacion=archivo;
		tope = nuevo;
		x++;
	}


}
