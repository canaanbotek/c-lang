#include <stdio.h>
#include <stdlib.h>

int main () {
    int variable;
    printf("El resultado de la operación 235 | 143 es: %i\n", 235 | 143);
    printf("El resultado de la operación 170 & 155 es: %i\n", 170 & 155);
    printf("El resultado de la operación 235 ^ 143 es: %i\n", 235 ^ 143);
    printf("El resultado de la operación ~152 es: %i\n", ~152 & 0xFF);
    printf("El resultado de 150U >> 2 es %u\n", 150U >> 2);
    printf("El resultado de 150U << 2 es %u\n", 150U << 2);
    printf( "Tamaño de la variable: %lu\n", (unsigned long) sizeof (variable));
    printf("Las variables tipo int ocupan: %lu\n", sizeof(int));
    return EXIT_SUCCESS;
}
