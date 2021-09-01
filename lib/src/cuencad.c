/* @brief get the size of the string 
 * @param string
 * @returns chain size 
 * */
#include<string.h>
#include<stdio.h>
int cuentacadena(char *cad){

 int contador = 0;
  while (cad[contador] != 0) {
    contador++;
  }
  return contador;   
}