/*
  program:1
  Name: etiquetado.cpp
  Author: josue acevedo maldonado,oribe abad silva
  Date: 20/02/2016 
  Description:
*/

#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

int matrix2[9]= {1,0,0,
				 0,2,0,
			   	 2,2,2};


void imprimir(int m[],int l){
	for(int i=0; i<=l; i++){
		printf("%d ",m[i]);
	}
	printf("\n");
}

/*funcion de etiquetado*/
int* etiquetado(int x[] ){
	printf("Algoritmo de etiquetado \n");
	imprimir(x,9);
	return matrix2;
}




