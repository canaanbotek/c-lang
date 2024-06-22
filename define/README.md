# Constantes (#define)

Para cantidades constantes lo mas común es definir las cantidades con un nombre representativo para mejor claridad y entendimiento del código, también para mayor escalabilidad. Si es preciso cambiar un valor constante, cambiando solo su valor en la definición se afectara todo el código.

Cuando se definen cantidades, hay un protocolo de asignación según su tamaño.

```c
int a=32768
```

Cuando el número no cabe en el tipo que se está indicando (en este caso no se indica nada así que se considera como un tipo int) se comprueba si cabe en el siguiente tipo de dato. Si tampoco cabe se prueba con el siguiente. El orden que se sigue es:
1. int
2. long
3. unsigned long

Un ejemplo:

```c
#include <stdio.h>
#include <stdlib.h>

#define CAJAS 4
#define UNIDADES_POR_CAJA 25
#define PRECIO_POR_UNIDAD 100
#define IMPUESTOS 1.16

int main() {
    float precio;
    precio = ( CAJAS * UNIDADES_POR_CAJA * PRECIO_POR_UNIDAD ) * ( IMPUESTOS );
    printf( "El precio total es: %f", precio );
    return EXIT_SUCCESS;
}
```

Para definir constantes hay que seguir unas sencillas normas:
1. Sólo se puede definir una constante por línea.
2. No llevan ; al final.
3. Se escriben en mayúsculas.
