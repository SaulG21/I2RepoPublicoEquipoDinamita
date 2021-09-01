/*
*@brief search vowels on the string
*@param palabra - string 
*@returns the number of vowels
*/

#include <stdio.h>

int contarVocales(char *cadena){
	int numvocales = 0,i; //inicializar el contador de las vocales 
	for (i = 0; cadena[i] != '\0'; ++i){ //El indice recorre la longitud del arreglo y si la cadena tiene vocales, el contador suma 1
		if (cadena[i] == 'a' ||cadena[i] == 'e' ||cadena[i] == 'i' ||cadena[i] == 'o' ||cadena[i] == 'u'||cadena[i] == 'A' ||cadena[i] == 'E' ||cadena[i] == 'I' ||cadena[i] == 'O' ||cadena[i] == 'U'){
			numvocales++;
		}
	}
	return numvocales; //Devuelve el contador del numero de vocales
}