# Introducción a bits y bytes

Los bits son la unidad de información más pequeña, digamos que son la base para almacenar la información. Son como los átomos a las moléculas. Los valores que puede tomar un bit son 0 ó 1. Si juntamos ocho bits tenemos un byte. Un byte puede tomar 256 valores diferentes (de 0 a 255). ¿Cómo se consigue esto? Imaginemos nuestro flamante byte con sus ocho bits. Supongamos que los ocho bits valen cero. Ya tenemos el valor 0 en el byte. Ahora vamos a darle al último byte el valor 1.

Cambiando los 1 y 0 podemos conseguir los 256 valores:

00000000 → 0
00000001 → 1
00000010 → 2
00000011 → 3
…
11111110 → 254
11111111 → 255

Como vemos con ocho bits podemos tener 256 valores diferentes, que en byte corresponden a los valores entre 0 y 255. En C en lugar de utilizarse el byte la unidad “básica” es el unsigned char. Aunque su numero de bits es usualmente ocho no tiene por qué ser así y puede ser mayor. Dependerá del compilador.

Para estar seguros del numero de bits por carácter lo mejor es verificar el valor de la macro CHAR_BIT, esta se define en el header limits.h.

## Operadores de bits

| Operador | Descripción                      |
|----------|----------------------------------|
| `|`      | OR (O)                           |
| `&`      | AND (Y)                          |
| `^`      | XOR (O exclusivo)                |
| `~`      | Complemento a uno o negación     |
| `>>`     | Desplazamiento a la derecha      |
| `<<`     | Desplazamiento a la izquierda    |

### Operador | (OR)

Si hacemos 235 | 143 = 239

235 → 11101011
143 → 10001111 |
239 → 11101111

La operación OR funciona de la siguiente manera: Tomamos los bits de cada uno de los valores y los comparamos si alguno de los bits es 1, se obtiene un uno. Si ambos bits son cero el resultado es cero. Primero se compara los dos primeros (el primero de cada uno de los números, 1 y 1 → 1), luego la segunda pareja (1 y 0 → 1) y así sucesivamente.

### Operador & (AND)

Compara los bits también dos a dos. Si ambos son 1 el resultado es 1. Si no, el resultado es cero.

Si hacemos 170 & 155 = 138

170 → 10101010
155 → 10011011 &
138 → 10001010

### Operador ^ (XOR)

Compara los bits y los pone a unos si son distintos. Si son iguales el bit resultante es un cero.

Si hacemos 238 ^ 143 = 100

235 → 11101011
143 → 10001111 ^
100 → 01100100

### Operador ~ (Complemento a uno)

Este operador acepta un sólo dato (operando) y pone a 0 los 1 y a 1 los 0, es decir los invierte. Se pone delante del operando.

Si hacemos ~152 = 103

152 → 10011000 ~
103 → 01100111

### Operador >> (Dezplazar a la derecha)

Este operador mueve cada bit a la derecha. El bit de la izquierda se pone a cero, el de la derecha se pierde. Si después de usar este operador realizamos la operación inversa no recuperamos el número original.

El formato es: variable o dato >> número de posiciones a desplazar

Si hacemos 150 >> 2 = 37

150 → 10010110 Número original
75 → 01001011 Primer desplazamiento. Entra un cero por la izquierda. El bit de la derecha se pierde.
37 → 00100101 Segundo desplazamiento.

NOTA: Un desplazamiento a la derecha equivale a dividir por dos. Esto es muy interesante porque el desplazamiento es más rápido que la división. Si queremos optimizar un programa esta es una buena idea. Sólo sirve para dividir entre dos. Si hacemos dos desplazamientos sería dividir por dos dos veces, no por tres.

### Operador << (Dezplazar a la izquierda)

Funciona igual que la anterior pero los bits se desplazan a la izquierda. Esta operación equivale a multiplicar por 2.

### Operador sizeof

Nos permite conocer el tamaño en bytes de una variable.

NOTA: Para mostrar el tamaño de la variable usamos %lu en lugar de %i. Esto es así porque sizeof devuelve un valor del tipo size_t y el estándar ISO-C90 sólo especifica que size_t debe ser un entero sin signo (puede ser un int, short int o long int).

### Lista de operadores

| Operador | Descripción                                                                 |
|----------|-----------------------------------------------------------------------------|
| `()`     | Paréntesis, se usan para agrupar expresiones y para llamar a funciones      |
| `[]`     | Subíndice de array                                                          |
| `->`     | Acceso a miembro de estructura a través de un puntero                       |
| `.`      | Acceso a miembro de estructura                                              |
| `!`      | Negación lógica                                                             |
| `~`      | Complemento a uno o negación bit a bit                                      |
| `++`     | Incremento (pre o post incremento)                                          |
| `--`     | Decremento (pre o post decremento)                                          |
| `(molde)`| Conversión de tipo (casting)                                                |
| `*`      | Operador de puntero (dereferenciación)                                      |
| `&`      | Operador de dirección (obtiene la dirección de una variable)                |
| `sizeof` | Operador que devuelve el tamaño de un tipo o variable en bytes              |
| `*`      | Multiplicación                                                              |
| `/`      | División                                                                    |
| `%`      | Módulo (residuo de la división entera)                                      |
| `+`      | Suma                                                                        |
| `-`      | Resta                                                                       |
| `<<`     | Desplazamiento de bits a la izquierda                                       |
| `>>`     | Desplazamiento de bits a la derecha                                         |
| `<`      | Menor que                                                                  |
| `<=`     | Menor o igual que                                                           |
| `>`      | Mayor que                                                                  |
| `>=`     | Mayor o igual que                                                           |
| `==`     | Igual que                                                                   |
| `!=`     | Distinto que                                                                |
| `&`      | AND bit a bit                                                               |
| `^`      | XOR (O exclusivo) bit a bit                                                 |
| `\|`      | OR bit a bit                                                                |
| `&&`     | AND lógico                                                                  |
| `\|\|`   | OR lógico                                                                   |
| `?:`     | Operador ternario (condicional)                                             |
| `=`      | Asignación                                                                  |
| `+=`     | Asignación con suma                                                         |
| `-=`     | Asignación con resta                                                        |
| `*=`     | Asignación con multiplicación                                               |
| `/=`     | Asignación con división                                                     |
| `,`      | Operador de coma, se usa para separar expresiones                           |
