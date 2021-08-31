#include "../src/invcad.c"
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	char const *val = cadinv (argv[1]);
	printf("La cadena invertida es: %s", val);
	return 0;
}