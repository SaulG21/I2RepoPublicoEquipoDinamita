#include "..\include\cadena.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[]){

    argv[1] = "Serpiente";
    argv[2] = "Elefante";

    char cad1[] = "Serpiente";
    char cad2[] = "Elefante";

    printf("\n\n*Cadenas con las que vamos a trabajar:*\n");
    printf("Cadena 1: '%s'", argv[1]);
    printf("\nCadena 2: '%s'", argv[2]);

    printf("\n\n*Funcion que muestra el tamanio de una cadena*\n");
	int const val = cuentacadena (argv[1]);
    int const val2 = cuentacadena (argv[2]);
	printf("La longitud de la cadena '%s' es: %d", argv[1], val);
    printf("\nLa longitud de la cadena '%s' es: %d", argv[2], val2);

    printf("\n\n*Funcion que imprime una cadena invertida*\n\n");
    printf("Cadena(s):\n");
    printf("Cadena 1: ");
    imprimeCadenaInvertida(argv[1], cuentacadena(argv[1]));
    printf("\n");
    printf("Cadena 2: ");
    imprimeCadenaInvertida(argv[2], cuentacadena(argv[2]));

    printf("\n\n*Funcion que imprime una cadena invertida*\n");
    printf("Comparar ambas cadenas: ");
    comparar(argv[1], argv[2]);

    printf("\n\n*Funcion que cuenta vocales de una cadena*\n");
    int n=contarVocales(argv[1]);
    printf("\nLa cadena 1 tiene %d vocales",n);
    int n2=contarVocales(argv[2]);
    printf("\nLa cadena 2 tiene %d vocales",n2);

    printf("\n\n*Funcion que imprime por sufijos una cadena*\n");
    printf("\nImprimir por sufijos la cadena 1: \n");
    sufijos(cad1); 
    printf("\nImprimir por sufijos la cadena 2: \n");
    sufijos(cad2);

	return 0;
}