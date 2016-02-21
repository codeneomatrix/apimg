/*
  program:1
  Name: etiquetado.cpp
  Author: josue acevedo maldonado,oribe abad silva
  Date: 20/02/2016 
  Description:
*/
#include "imgfun.cpp"
int* sa;
int matrix[9]= {1,0,0,
				0,1,0,
				1,1,1};


int main(){	
	
    sa= etiquetado(matrix);
	
	imprimir(sa,9);
	
	
	
    //system("pause");
    return 0;
    }
