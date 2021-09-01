/* @brief This test generates an array based on the parameters porvided by the user, then prints the elements in the array in ordrer and then in an inverse order.
 * @param array arr pointer to an array
 * @param n The size n of the array
 *  The fuction is void, only prints elements of the array
*/

#include <stdio.h>
#include <stdlib.h>
#include "..\src\imprimirCadenaInvertida.c"

// void imprimeCadenaInvertida(char arr[], int n);

int main()
{
  char cadenita[] = "Arquitectura";
  imprimeCadenaInvertida(cadenita, 12);
}
