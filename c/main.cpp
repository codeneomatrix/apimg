/*
  program:1
  Name: etiquetado.cpp
  Author: josue acevedo maldonado,oribe abad silva
  Date: 20/02/2016
  Description:
*/
#include "imgfun.cpp"
#include <vector>

int* sa;
int matrix[9]= {10,5,3,
								2,4,0,
								3,9,8};
int matrixr[9]= {10,6,9,
								8,9,7,
								4,6,2};
int matrixd[9]= {5,5,6,
								4,7,8,
								1,2,9};

int main(){

    sa= etiquetado(matrix);

	imprimir(sa,9);

	sa= grises(matrix,matrixr,matrixd,3,3);

	imprimir(sa,9);

	sa=umbral(matrixr,5,3,3);

	imprimir(sa,9);

	sa= canny(matrix);

	imprimir(sa,9);

	sa= sobel(matrix);

	imprimir(sa,9);

	sa=convolucion(matrix,matrixr,3,3);

    return 0;
    }
