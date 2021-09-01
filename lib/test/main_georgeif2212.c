#include <stdio.h>
#include <string.h>
#include "..\include\cadena.h"
#define MAX 100

int main (){
    int n;
    char cadena1[MAX],cadena2[MAX];
    printf("Ingresa la cadena 1: ");
    gets(cadena1);   
    printf("Ingresa la cadena 2: ");
    gets(cadena2);
    printf("\n\tComparar cadenas\n\n");
    comparar(cadena1,cadena2);
    printf("\n\tNumero de caracteres en la cadena\n\n");
    printf("\nEl numero de caracteres de la cadena 1 es %d\n",cuentacadena(cadena1));
    printf("\nEl numero de caracteres de la cadena 2 es %d\n",cuentacadena(cadena2));
    printf("\n\tCadenas invertidas\n\n");
    imprimeCadenaInvertida(cadena1,strlen(cadena1));
    printf("\n");
    imprimeCadenaInvertida(cadena2,strlen(cadena2));
    printf("\n\tNumero de vocales en las cadenas\n\n");
    printf("\nEl numero de vocales que tiene la cadena 1 es %d\n",contarVocales(cadena1));
    printf("\nEl numero de vocales que tiene la cadena 2 es %d\n",contarVocales(cadena2));
    printf("\n\tSufijos\n\n");
    sufijos(cadena1);
    sufijos(cadena2);
    return 0;
}