#include <stdio.h>
#include "..\src\sufijos.c"     

int main(){
    char cadena[50];
    printf("Introduce una cadena: ");
    gets(cadena);
    sufijos(cadena);
    return 0;
}