/* @brief invert the values of two strings
 * @param string
 * @returns chain with inverted values
 * */
#include<string.h>
#include<stdio.h>
char *cadinv(char *cad){
    // printf("La Cadena invertida es: ");
    strrev(cad);
    //printf("%s ", cad);
	return cad;
}