/*
  program:1
  Name: etiquetado.cpp
  Author: josue acevedo maldonado,oribe abad silva
  Date: 20/02/2016
  Description:
*/

#include <stdio.h>
#include <stdlib.h>
#include <vector>


//#include <vector>
//#include <math.h>

int matrix2[9]= {1,0,0,
				 0,2,0,
			   	 2,2,2};


void imprimir(int m[],int l){
	for(int i=0; i<l; i++){
		printf("%d",m[i]);
	}
	printf("\n");
}

/*funcion de etiquetado*/
int* etiquetado(int x[] ){
	printf("Algoritmo de etiquetado \n");
	imprimir(x,9);
	return matrix2;
}

	/**Algoritmo para convertir imagen COLOR a GRAY**/
int* grises(int r[],int g[],int b[],int alto,int ancho){
		printf("Algoritmo de Grises\n");
		int* aux;//auxiliar que regresa la funcion
		for (size_t i = 0; i < ancho*alto; i++) {
			int val=(r[i]+g[i]+b[i])/3; //calculo del promedio de los canales RGB
			aux[i]=val;//asignacion al vector de retorno del promedio
		}
	return aux; //regreso del auxiliar
}
/**Algoritmo para umbralado**/
int * umbral(int x[],int umbral,int alto,int ancho){
	printf("Algoritmo de Grises\n");
	int* aux = (int*)malloc(ancho*alto*(sizeof(int)));//auxiliar que regresa la funcion
	for (size_t i = 0; i < ancho*alto; i++) {
		if(x[i]<=umbral){
			aux[i]=0;
		}
		else{
			aux[i]=255;
		}

	}
return aux; //regreso del auxiliar

}

int* canny(int x[] ){
	printf("Algoritmo de canny \n");
	imprimir(x,9);
	return matrix2;
}

int* sobel(int x[] ){
	printf("Algoritmo de sobel \n");
	imprimir(x,9);
	return matrix2;
}
