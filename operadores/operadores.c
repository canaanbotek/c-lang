#include <stdio.h>
#include <stdlib.h>

int a=3;
int b=2;

int main() {
    int c;
    int d;
    int x, y;
    c = a + b;
    d = a + b + c;
    /* Sumas normales */
    printf("a+b=%d\n", c);
    printf("a+b+c=%d\n",d);
    /* Hacer c = c+5 */
    c += 5;
    printf("Operador +=5 sobre c da:%d\n", c);
    /* Hacer c = c+d */
    c += d;
    printf("Operador +=d sobre c da:%d\n", c);
    /* Incrementar en 1*/
    printf("valor de c actual es:%d\n", c);
    c++;
    printf("c++:%d\n", c);
    /* Sustracción y signo - */
    x = 2;
    y = -x;
    printf("valor de x=%d, valor de y=%d\n", x, y);
    /* Operaciones de division */
    printf("\nOperaciones de división\n");
    a = 5;
    b = 3;
    printf("Vamos a hacer la división entera %d/%d\n", a, b);
    c = a/b;
    printf("%d/%d=%d : Vemos que el resultado es un entero!\n", a, b, c);
    printf("Operador para modulo resto, SOLO NUMEROS ENTEROS\n");
    a = 18;
    b = 5;
    printf( "Resto de la división %d:%d: %d \n", a, b, a % b );
    /* Operadores de comparación */
    printf( "10 > 5 da como resultado %i\n", 10>5 );
    printf( "10 < 5 da como resultado %i\n", 10<5 );
    printf( "5 == 5 da como resultado %i\n", 5==5 );
    printf( "10 == 5 da como resultado %i\n", 10==5 );
    /* Operadores lógicos */
    printf("Resultado: %i\n", (10==10 && 5>2)); /* Resultado: 1 */
    printf("Resultado: %i\n", (10==10 && 5<2)); /* Resultado: 0 */
    printf("Resultado: %i\n", (10==10 || 5<2)); /* Resultado: 1 */
    printf("Resultado: %i\n", !10==10); /* Resultado: 0 */
    printf("Resultado: %i\n", !(5<2)); /* Resultado: 1 */
    return EXIT_SUCCESS;
}

