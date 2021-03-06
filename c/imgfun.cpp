/*
  program:1
  Name: etiquetado.cpp
  Author: josue acevedo maldonado,oribe abad silva
  Date: 20/02/2016
  Description:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int matrix2[9]= {1,0,0,
				 0,2,0,
			   	 2,2,2};


void imprimirvector(int m[],int l,int h){
	for(int i=0; i<l*h; i++){
			printf(" %d ",m[i]);
	}
	printf("\n");
}

void imprimir(int m[],int l,int h){
	for(int i=0; i<l; i++){
		for(int j=0; j<h; j++){
			printf("\t%d ",m[j+(i*l)]);
		}
		printf("\n");
	}
	printf("\n");
}

void reset(int m[],int l){
	for(int i=0; i<l; i++){
		m[i]=0;
	}
}

double producto_escalar(int v1[], int v2[], int d){
	// vector_1[] = {5,1,0};
	// vector_2[] = {-1,5,3};

	int resultado = 0;
	int i;
	for (i=0; i < d; i++) {
		resultado += v1[i] * v2[i];
	}
	return resultado;
}


void convolucion(int salida[], int mascara[],int altom,int anchom,int img[],int alto,int ancho){
	printf("Algoritmo de convolucion \n");
	reset(salida,alto);

 int centroh=floor((double)(anchom/2));
 int centrov=floor((double)(altom/2));

	int tem[altom*anchom];
int mv=0;
int mh=0;
int n=(alto-altom)+1;
int m=(ancho-anchom)+1;
for(int k=0;k<n;k++){
	mv=k;
	for (int l = 0;l<m;l++) {
		mh=l;
		int con=0;
		int resultado=0;
		for(int i=(0+mv); i<(altom+mv); i++){
			for(int j=(0+mh); j<(anchom+mh); j++){
				//printf("tem[%d+(%d*%d)]=img[%d+(%d*%d)=%d ==> %d]\n",j,i,alto,j,i,alto,j+(i*alto),img[j+(i*alto)]);
				resultado+= mascara[con]*img[j+(i*alto)];
				con++;
			}
		}

		//printf("%d\n",(altom*anchom));
		//imprimir(tem,altom,anchom);
		//imprimir(mascara,altom,anchom);
		//int r = producto_escalar(tem,mascara,(altom*anchom));
		//printf("%d\n", centrov+mv);
		//printf("centroh %d\n",centroh+mh);
		//printf("centrov %d\n",centrov+mv);
		//printf("salida[%d]\n",(centroh+mh)+((centrov+mv)*alto));
		salida[(centroh+mh)+((centrov+mv)*alto)]=resultado;
		//printf("\n r= %d \n",r);

	}
	}

	imprimir(salida,alto,ancho);
//printf("\ntamaño mascara : %d\n",sizeof(mascara));
}

/*funcion de etiquetado*/
void etiquetado(int s[],int x[] ){
	printf("Algoritmo de etiquetado \n");
	imprimir(x,4,4);

}

	/**Algoritmo para convertir imagen COLOR a GRAY**/
void grises(int s[],int r[],int g[],int b[],int alto,int ancho){
		printf("Algoritmo de Grises\n");
		//printf("\ntama�o: %d\n",sizeof(r));

		for (size_t i = 0; i < ancho*alto; i++) {
			int val=(r[i]+g[i]+b[i])/3; //calculo del promedio de los canales RGB
			s[i]=val;//asignacion al vector de retorno del promedio
		}
}
/**Algoritmo para umbralado**/
void umbral(int s[], int x[],int umbral,int alto,int ancho){
	printf("Algoritmo de umbralado\n");
	for (size_t i = 0; i < ancho*alto; i++) {
		if(x[i]<=umbral){
			s[i]=0;
		}
		else{
			s[i]=255;
		}

	}

}

void canny(int salida[],int img[],int alto,int ancho){
	printf("Algoritmo de canny \n");
	int kernel[9]={1,2,1,0,0,0,-1,-2,-1};
	convolucion(salida, kernel,3,3,img,alto,ancho);
}

void sobelhorizontal(int salida[],int img[],int alto,int ancho){
	printf("Algoritmo de sobelhorizontal \n");
	int kernel[9]={1,2,1,0,0,0,-1,-2,-1};

	convolucion(salida, kernel,3,3,img,alto,ancho);
}

void sobelvertical(int salida[],int img[],int alto,int ancho){
	printf("Algoritmo de sobelvertical \n");
	int kernel[9]={1,0,-1,2,0,-2,1,0,-1};

	convolucion(salida, kernel,3,3,img,alto,ancho);
}

void sobel(int salida[],int img[],int alto,int ancho){
	printf("Algoritmo de sobel\n");
	int kernel[9]={2,2,0,2,0,-2,0,-2,-2};

	convolucion(salida, kernel,3,3,img,alto,ancho);
}

void gauss(int salida[],int img[],int alto,int ancho){
	printf("Algoritmo de gauss\n");
	int kernel[25]={1,4,7,4,1,4,16,26,16,4,7,26,41,26,7,4,16,26,16,4,1,4,7,4,1};

	convolucion(salida, kernel,5,5,img,alto,ancho);
}
