/*
  program:1
  Name: etiquetado.cpp
  Author: josue acevedo maldonado,oribe abad silva
  Date: 20/02/2016
  Description:
*/
#include "imgfun.cpp"
#include <vector>

int sa[9];
int matrixsalida[16];
int kernel1[9]={1,2,3,
				5,7,5,
				2,2,9};
				
int matrix[16]= {10,5,3,7,
				 2,4,0,1,
				 4,6,2,3,
				 3,9,8,3};
int matrixr[16]= {10,6,9,7,
				  8,9,7,8,
				  1,6,5,2,
				  4,6,2,6};
int matrixd[16]= {5,5,6,3,
				 4,7,8,2,
				 1,6,2,7,
				 1,2,9,4};

int main(){

    //sa= etiquetado(matrix);

	//imprimir(sa,9);

	grises(matrixsalida,matrix,matrixr,matrixd,4,4);

	imprimir(matrixsalida,4,4);

	umbral(matrixsalida,matrixr,5,4,4);

	imprimir(matrixsalida,4,4);

	//sa= canny(matrix);

	//imprimir(sa,9);

	//sa= sobel(matrix);

	//imprimir(sa,9);

	convolucion(matrixsalida,kernel1,3,3,matrixr,4,4);

    return 0;
    }
