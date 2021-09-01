/* @brief This test generates an array based on the parameters porvided by the user, then prints the elements in the array in ordrer and then in an inverse order.
 * @param array arr pointer to an array
 * @param n The size n of the array
 *  The fuction is void, only prints elements of the array
*/

#include <stdio.h>
#include <stdlib.h>
#include "..\src\imprimirCadenaInvertida.c"

void initialize_array(unsigned *, size_t, unsigned);
void imprimeCadenaInvertida(unsigned *, int);

int main(int argc, char const *argv[])
{
  unsigned n = atof(argv[1]);
  unsigned seed = atof(argv[2]);
  unsigned *array_ptr = (unsigned *)malloc(n * sizeof(int));

  initialize_array(array_ptr, n, seed);

  for (size_t i = 0; i < n; i++)
  {
    printf("%d ", array_ptr[i]);
  }

  imprimeCadenaInvertida(array_ptr, n);
}

void initialize_array(unsigned *arr, size_t n, unsigned seed)
{
  srand(seed);
  for (size_t i = 0; i < n; i++)
  {
    printf("%d ", arr[i] = rand());;
  }
}