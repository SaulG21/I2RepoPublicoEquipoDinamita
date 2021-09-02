#include "..\include\cadena.h"
#include <stdio.h>
#include <string.h>

int main (){
    char cadena1[] = "agua";
    char cadena2[] = "ahora";
    char cadena3[] = "amar";
    char cadena4[] = "amigo";
    char cadena5[] = "aprender";
    char cadena6[] = "ayer";
    char cadena7[] = "bueno";
    char cadena8[] = "calle";
    char cadena9[] = "deporte";
    char cadena10[] = "dinero";

    printf("\nComparar ambas cadenas: ");
    comparar(cadena2, cadena1);

    printf("\n\nImprimir al reves: \n");
    imprimeCadenaInvertida(cadena3, cuentacadena(cadena3));
    printf("\n");
    imprimeCadenaInvertida(cadena4, cuentacadena(cadena4));

    printf("\n\nCaracteres de cadena5: ");
    printf("%d", cuentacadena(cadena5)); 
    printf("\nCaracteres de cadena6: ");
    printf("%d", cuentacadena(cadena6)); 

    int n=contarVocales(cadena7);
    printf("\n\nLa cadena7 tiene %d vocales",n);

    int n2=contarVocales(cadena8);
    printf("\nLa cadena8 tiene %d vocales",n2);

    printf("\n\nImprimir por sufijos la cadena9: \n");
    sufijos(cadena9); 

    printf("\nImprimir por sufijos la cadena10: \n");
    sufijos(cadena10);

    return 0;
}