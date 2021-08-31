#include "../src/cuencad.c"
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	int const val = cadinv (argv[1]);
	printf("La longitud de la cadena '%s' es: %d", argv[1], val);
	return 0;
}