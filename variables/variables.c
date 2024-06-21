#include <stdio.h>
#include <stdlib.h>

/* Variables globales */
int y=1;
float num=4060.80;

/* Para un char, se puede inicializar de esta manera y es lo mismo*/
char letra='A';
// char letra=65;


/* Definir mas de una variable del mismo tipo */
int a=10, b=20;


int main() {
    /* Variable locales*/
    int x=2;
    int numero=13000;

    /* Prints int */
    printf("El valor de x local es: %i\n", x);
    printf("\nPrint multiple\n");
    printf("El valor de x local es: %i\nEl valor de y global es: %i\n", x, y);

    printf("\nDistitos tipos de prints\n");
    printf("Decimal usando 'i': %i\n", numero);
    printf("Decimal usando 'd': %d\n", numero);
    printf("Hexadecimal: %x\n", numero);
    printf("Octal: %o\n", numero);

    /* Prints char */
    printf("La letra es: %c.\n", letra);
    printf("El número ASCII de la letra %c es: %i.", letra, letra);

    /* Prints float */
    printf("El valor de num que es float es: %f\n", num);
    printf("El valor de num en notación exponencial es: %e\n", num);

    /* Prints double */
    float numf;
    numf = 10.20f * 20.30f;
    printf("El resultado para numf es: %f\n", numf);

    int num1;
    num1 = 2147483648;
    printf( "El valor de num1 es: %i\n", num1 );

    return EXIT_SUCCESS;
}
