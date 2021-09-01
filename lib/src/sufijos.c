/* @brief prints the suffixes of a string
 * @param string - character string
 * @param n - string length
 */

#include <stdio.h>

void sufijos(char cadena[]){
    int n=0;
    while (cadena[n] != '\0') {
    	n++;
  	}
  	
  	printf("%s\n", cadena);
	
	while (n>0) {
		cadena[--n]='\0';
		printf("%s\n",cadena);
	}
}