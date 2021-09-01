#include<string.h>
#include<stdio.h>
#include "..\src\comparar.c" 

int main (){
    char cadena1[] = "ASDFASDFASDFASDF";
    char cadena2[] = "hola";
    comparar(cadena1,cadena2);
    
    return 0;
}