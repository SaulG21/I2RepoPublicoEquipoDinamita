/* @brief compare two strings
 * @param count - string length
 * @returns void
 */

#include<string.h>
#include<stdbool.h>
#include<stdio.h>

void comparar(char s1[], char s2[]){
   
    int count = 0;
    if ( strlen(s1) == strlen(s2) ) {
        for ( int i = 0 ; i < strlen(s1) ; i++ ) {
            if (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0')){
                count++;
            }
        }
    }

    if ( count == strlen(s1) ) {
        printf("Las cadenas son iguales :)");
    } else {
        printf("No son iguales las cadenas introducidas :[");
      }
}