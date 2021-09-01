#include <stdio.h>
#include <string.h>
#include "..\include\cadena.h"

int main (){
    char cadena1[] = "hola";
    char cadena2[] = "adios";

    printf("\nComparar ambas cadenas: ");
    comparar(cadena2, cadena1);

    printf("\n\nImprimir al reves: \n");
    imprimeCadenaInvertida(cadena1, cuentacadena(cadena1));
    printf("\n");
    imprimeCadenaInvertida(cadena2, cuentacadena(cadena2));

    printf("\n\nCaracteres de cadena1: ");
    printf("%d", cuentacadena(cadena1)); 
    printf("\nCaracteres de cadena2: ");
    printf("%d", cuentacadena(cadena2)); 

    int n=contarVocales(cadena1);
    printf("\n\nLa cadena1 tiene %d vocales",n);

    int n2=contarVocales(cadena2);
    printf("\nLa cadena2 tiene %d vocales",n2);

    printf("\n\nImprimir por sufijos la cadena1: \n");
    sufijos(cadena1); 

    printf("\nImprimir por sufijos la cadena2: \n");
    sufijos(cadena2);

    return 0;
}
