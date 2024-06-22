#include <stdio.h>
#include <stdlib.h>

int main () {
    int num;
    printf("Ingrese un número entero:");
    fflush(stdout);
    scanf("%i", &num);
    printf("Has ingresado el número: %i\n", num);
    return EXIT_SUCCESS;
}
