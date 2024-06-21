#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Salto de linea*/
    printf("test de salto del linea\n esta es la segunda linea \n");
    /*Escribir una barra \*/
    printf("test doble barra\\ linea \n");
    /*Mensaje de alerta con pitido sonoro si el sistema lo permite*/
    printf("Este es un ejemplo con \aalert.\n");
    /*borra el caracter inmediamente antes*/
    printf("Texto con\b retroceso.\n");
    /*Sobrescribe exacamente la misma cantidad de caracteres que estan antes de la instrucción con lo que está despues*/
    printf("Inicio de línea\rSobrescrito.\n");
    /*Imprime columnas*/
    printf("Columna1\tColumna2\tColumna3\n");
    /*Imprime con una tabulación las siguientes lineas en distintos renglones*/
    printf("Primera línea.\vSegunda línea.\vTercera línea.\n");
    /*Escribe signo de interrogación*/
    printf("Este es un signo de interrogación: \?\n");
    return EXIT_SUCCESS;
}
