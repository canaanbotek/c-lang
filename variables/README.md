# Notas sobre variables

Cuando definimos una variable lo que estamos haciendo es decirle al compilador que nos reserve una zona de la memoria para almacenar datos el tipo especificado.

Tenemos variables locales y globales: La diferencia práctica es que las variables globales se pueden usar en cualquier función (o procedimiento). Las variables locales sólo pueden usarse en el procedimiento en el que se declaran.

## Nombres válidos para la variables

Ejemplos de nombres válidos: camiones, numero, buffer, a1, j10hola29, num_alumnos

Ejemplos de nombres no válidos: 1abc, nombre?, número, num/alumnos

## Palabras reservadas

auto, break, case, char, const, continue, default, do, double, else, enum, extern, float, for, goto, if, int, long, register, return, short, signed, sizeof, static, struct, switch, typedef, union, unsigned, void, volatile, while

C distingue entre mayúsculas y minúsculas. Por lo tanto: Nombre, nombre, NOMBRE

## Int

Variable para almacenar números enteros. El rango de valores que admite es -32.768 a 32.767.

Nota importante: el rango indicado (de -32.768 a 32.767) puede variar de un
compilador a otro, en este caso sería un compilador donde el tipo int es de 16 bits.

| Tipo de variable  | Descripción                  | Modificador |
|-------------------|------------------------------|-------------|
| int               | Entero decimal               | %i          |
| int               | Entero decimal               | %i          |
| unsigned int      | Entero decimal sin signo     | %u          |
| int               | Entero octal                 | %o          |
| int               | Entero hexadecimal           | %x          |

## Char

Usado para almacenar caracteres, estos en realidad se almacenan como numeros de 0 a 255, los primeros 128 son ASCII estandar, el resto depende del idioma.

Las variables tipo char se pueden usar (y de hecho se usan mucho) para almacenar enteros. Si necesitamos un número pequeño (entre -128 y 127) podemos usar una variable char (8bits) en vez de una int (16bits), con el consiguiente ahorro de memoria.

### modificaro unsigned

Este modificador (que significa sin signo) modifica el rango de valores que puede contener una variable. Solo admite valores positivos.

```c
unsigned char variable;
```

En este caso, esta variable en vez de tener un rango de -128 a 127 pasa a tener un rango de 0 a 255. Los indicadores de signed o unisgned solo puede aplicarse a tipos enteros.

## Double

En las variables tipo double se almacenan números reales. El mayor número que se pueda almacenar es el 1,7E308 y el más pequeño del 1,7E-307.

Por defecto, si no se especifica nada, las constantes son de tipo double. Para especificar que queremos que la constante sea float debemos especificar el sufijo “f” o “F”. Si queremos que la constante sea de tipo long double usamos el sufijo “l” o “L”.

Al hacer una operación con double tenemos mayor precisión que con floats

## Overflow: Qué pasa cuando nos pasamos el rango

se produce cuando intentamos almacenar en una variable un número mayor del máximo permitido. El comportamiento es distinto para variables de números enteros y para variables de números en coma flotante.

### Con números enteros

Supongamos que en nuestro ordenador el tipo int es de 32 bits. El número máximo que se puede almacenar en una variable tipo int es por tanto 2.147.483.647 (ver apartado anterior). Si nos pasamos de este número el que se guardará será el siguiente pero empezando desde el otro extremo, es decir, el -2.147.483.648. El compilador seguramente nos dará un aviso (warning) de que nos hemos pasado.

### Con números en coma flotante
El comportamiento con números en coma flotante es distinto. Dependiendo del ordenador si nos pasamos del rango al ejecutar un programa se puede producir un error y detenerse la ejecución. Con estos números también existe otro error que es el underflow. Este error se produce cuando almacenamos un número demasiado pequeño (3,4E-38 en float).

## short int, long int y long double

short int, long int, long long y long double. se utilizan para ajustar el tamaño y la precisión de los tipos de datos estándar (int y double) según los requisitos específicos del programa en términos de espacio de almacenamiento y rango de valores posibles.

## Resumen

| Tipo         | Datos almacenados              | Nº de Bits | Valores posibles (Rango)                    | Rango usando `unsigned` |
|--------------|--------------------------------|------------|--------------------------------------------|-------------------------|
| unsigned char| Caracteres y enteros pequeños  | 8          | 0 a 255                                    | 0 a 255                 |
| int          | Enteros                        | 16         | -32.768 a 32.767                           | 0 a 65.535              |
| long         | Enteros largos                 | 32         | -2.147.483.648 a 2.147.483.647             | 0 a 4.294.967.295       |
| float        | Números reales (coma flotante) | 32         | 3.4E-38 a 3.4E38                           | No se aplica            |
| double       | Números reales (doble precisión)| 64         | 1.7E-307 a 1.7E308                         | No se aplica            |




