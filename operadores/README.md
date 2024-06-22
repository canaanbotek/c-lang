# Operadores

Los operadores sirven para manipular datos, pueden ser de asignación, relación, lógicos, aritméticos o de manipulación de bits.

## Operadores de asignación

Sirven para darle valor a una variable

```c
int a = 3;
int b;
b = a;
```

## Operadores aritméticos

Son aquellos para realizar operaciones matemáticas. +, -, *, /, %,

```c
int a = 3;
int b = 4;
int c;
c = a + b;
c = a - b;
c = a * b;
c = a / b;
c = a % b;
c += a;
c -= 2;
b = -a;
c++;
c--;
```

Hay que tener en cuenta que para el caso de la división / el resultado será entero a menos que los números sean de tipo float para tener los decimales. En el caso de la división % solo vale para números enteros.

## Operadores de comparación

Se utilizan para comprobar condiciones en las sentencias de control de flujo. Si una condición se evalua y no se cumple, el resultado es 0, caso contrario es 1.

Es decir:
* Cuando la condición se cumple el resultado es un 1 (true).
* Cuando no se cumple es un 0 (false).

| Operador | Descripción                                           |
|----------|-------------------------------------------------------|
| `==`     | Igual que: se cumple si los operandos son iguales     |
| `!=`     | Distinto que: se cumple si los operandos son diferentes |
| `>`      | Mayor que: se cumple si el primer operando es mayor que el segundo |
| `<`      | Menor que: se cumple si el primer operando es menor que el segundo |
| `>=`     | Mayor o igual que: se cumple si el primer operando es mayor o igual que el segundo |
| `<=`     | Menor o igual que: se cumple si el primer operando es menor o igual que el segundo |

## Operadores lógicos

Nos permiten unir varias comparaciones.

### Operador && (AND)

Devuelve un 1 si se cumplen dos condiciones.

```c
printf( "Resultado: %i", (10==10 && 5>2 ); /* Resultado: 1 */
printf( "Resultado: %i", (10==10 && 5<2 ); /* Resultado: 0 */
```
### Operador || (OR)

Devuelve un 1 si se cumple una de las condiciones.

```c
printf( "Resultado: %i", (10==10 || 5<2 ); /* Resultado: 1 */
```

### Operador ! (NOT)

Si la condición se cumple NOT hace que no se cumpla y viceversa.

```c
printf( "Resultado: %i", !10==10 ); /* Resultado: 0 */
printf( "Resultado: %i", !(5<2) ); /* Resultado: 1 */
```

### Observaciones

* En los operadores && y || primero se evalúa la condición de la izquierda y si es necesario se evalúa la de la derecha.
