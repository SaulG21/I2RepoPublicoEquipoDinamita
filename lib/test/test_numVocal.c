#include <stdio.h>
#include "..\src\numvocal.c"
#define MAX 100
int main(){
    char palabra[MAX];
    gets(palabra);
    int n=contarVocales(palabra);
    printf("La cadena tiene %d vocales",n);
    return 0;
}