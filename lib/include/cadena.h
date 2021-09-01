/**
 * @file cadena.h
 * @authors: 
 *          1. Garcia Godoy Victor Saul
 *          2. Alcantara Segura Karina
 *          3. Infante Fragoso Jorge
 *          4. Mercado Fernández Israel Yosafat
 *          5. Benitez Garcia Alan David
 * @brief  This library is based on string.h.
 *         It allow operate with arrangements of characters (strings), for example it can 
 *         get the size of one string, or compare two strings, among other operations
 *         presented here.      
 * @version 0.1
 * @date 2021-08-31
 * @copyright Copyright (c) 2021
 */

#include<string.h>
#include<stdint.h>

/**
 * @brief compare two arrangements of characters
 * @param char *s1
 * @param char *s2
 * @return if the strings are equals (type: string)
 */
char *comparar(const char *s1, const char *s2);

/**
 * @brief get the size of the string 
 * @param char *cad
 * @return chain size (type: int)
 */
int cuentacadena(char *cad);

/**
 * @brief This function takes an array of integers and the size of 
 * the array and print the array in a inverse order (meaning end to beging).
 * @param array arr pointer to an array
 * @param n The size n of the array
 * @return type: void
 */
void imprimeCadenaInvertida(unsigned *arr, int n);

/**
 * @brief search vowels on the string
 * @param char *cadena
 * @return the number of vowels (type: int)
 */
int contarVocales(char *cadena);

/**
 * @brief prints the suffixes of a string
 * @param char cadena[]
 * @return type: void
 */
void sufijos(char cadena[]);