# Introducción de datos por teclado

Una interrupción por teclado puede ser un pequeño programa en memoria que se ejecuta continuamente comprobando el estado del teclado.

## Scanf

El uso de scanf es muy similar al de printf con una diferencia, nos da la posibilidad de que el usuario introduzca datos en vez de mostrarlos.

```c
scanf( "%d", &var );
```
un ejemplo donde se deben ingresar 3 números separados por espacio

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    printf( "Introduce tres números: " );
    fflush(stdout);
    scanf( "%d %d %d", &a, &b, &c );
    printf( "Has tecleado los números %d %d %d\n", a, b, c );
    return EXIT_SUCCESS;
}
```

## Modificadores

| Tipo de dato        | Descripción                                      | Modificador |
|---------------------|--------------------------------------------------|-------------|
| `int`               | Entero. Puede ser decimal, octal o hexadecimal   | `%i`        |
| `int`               | Entero decimal                                   | `%d`        |
| `unsigned int`      | Entero decimal sin signo                         | `%u`        |
| `int`               | Entero octal                                     | `%o`        |
| `int`               | Entero hexadecimal                               | `%x`        |
| `float`             | Número de coma flotante                          | `%f`        |
| `double`            | Número de coma flotante de doble precisión       | `%lf`       |
| `char`              | Carácter                                         | `%c`        |
| `char[]`            | Cadena de caracteres                             | `%s`        |


