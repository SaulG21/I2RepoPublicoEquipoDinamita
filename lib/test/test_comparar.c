#include <stdio.h>
#include "..\src\comparar.c"     

int main(){

    const char *s1, *s2;
    char cadena[50], cadena2 [50];
    printf("Introduce la cadena 1: ");
    gets(cadena);
    printf("Introduce la cadena 2: ");
    gets(cadena2);
    s1 = cadena;
    s2 = cadena2;
    printf(comparar(s1,s2));
    return 0;
}