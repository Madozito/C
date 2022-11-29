#include <stdio.h>
#include <stdlib.h>
const int MAX = 80;
typedef char string [MAX];
typedef enum {FALSE, TRUE} boolean; 
 /*Ejercicio 3
Escribir un programa en C++ en el cual se defina un tipo string que pueda tener como máximo
MAX caracteres, donde MAX es una constante entera de valor 80 y realice las siguientes acciones: */
int main()
{
   /*a) Cargar un string desde teclado. La cadena ingresada por el usuario culmina con enter*/
   char car;
   int i = 0;

   printf("Ingrese una frase y termine con ENTER: ");
   fflush(stdin);
   scanf("%c",&car);
   
}