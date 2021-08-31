/* @brief This function takes an array of integers and the size of the array and print the array in a inverse order (meaning end to beging).
 * @param array arr pointer to an array
 * @param n The size n of the array
 * @returns The fuction is void
*/

#include <string.h>
#include <stdio.h>

void imprimeCadenaInvertida(unsigned *arr, int n)
{
  for (int i = n; i >= 0; i--)
  {
    printf("%d ", arr[i]);
  }
}