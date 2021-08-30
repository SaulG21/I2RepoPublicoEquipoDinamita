/* @brief compare two strings
 * @param count - string length
 * @returns "Las cadenas son iguales :)"
 * @returns "No son iguales las cadenas introducidas :["
 */

#include<string.h>
#include<stdbool.h>
#include<stdio.h>

char * compareTo(const char *s1, const char *s2){
   
    int count = 0;
    if ( strlen(s1) == strlen(s2) ) {
        for ( int i = 0 ; i < strlen(s1) ; i++ ) {
            if (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0')){
                count++;
            }
        }
    }

    if ( count == strlen(s1) ) {
        return "Las cadenas son iguales :)";
    } else {
        return "No son iguales las cadenas introducidas :[";
      }
}