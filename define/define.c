#include <stdio.h>
#include <stdlib.h>

#define CAJAS 4
#define UNIDADES_POR_CAJA 25
#define PRECIO_POR_UNIDAD 100
#define IMPUESTOS 1.16

int main() {
    float precio;
    precio = (CAJAS*UNIDADES_POR_CAJA*PRECIO_POR_UNIDAD)*(IMPUESTOS);
    printf("El precio total es: %f\n", precio);
    return EXIT_SUCCESS;
}
