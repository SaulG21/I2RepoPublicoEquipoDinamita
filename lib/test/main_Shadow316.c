#include ".\include\cadena.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[]){
    printf("*Funcion que muestra el tamaño de una cadena*\n");
	int const val = cuentacadena (argv[1]);
	printf("La longitud de la cadena '%s' es: %d", argv[1], val);
    printf("\n\n");

    //printf("*Funcion que imprime una cadena invertida*\n");


	return 0;
}