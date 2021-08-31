/* @brief get the size of the string 
 * @param string
 * @returns chain size 
 * */
#include<string.h>
#include<stdio.h>
int cadinv(char *cad){

 int contador = 0;
  while (cad[contador] != 0) {
    contador++;
  }
  //printf("La longitud de '%s' es %d", cad, contador);

  //cad[1] = (char)contador;
  return contador;   
}

 
  // printf("La Cadena invertida es: ");
    //strrev(cad);
    //printf("%s ", cad);
	//return cad;