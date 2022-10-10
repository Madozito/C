
#include <stdio.h>
#include <stdlib.h>

int main()
{

// Ejercicio 1  Practico 5
/*Escribir un programa en C++ que pida al usuario un carácter desde teclado como dato de entrada.
Como salida, el programa debe desplegar en pantalla un mensaje indicando si el carácteringresado es o no una letra mayúscula.
*/
//
/*
     char caracter;
    printf("Ingrese un caracter desde teclado\n");
    scanf("%c",&caracter);
    if (caracter >='A' && caracter<='Z')
    {
        printf("Su caracter es letra mayuscula\n");

    }
    else
        printf("Su caracter es minuscula\n");

        system("pause");
*/     
//Ejercicio 2
/*Escribir un programa en C++ que pida al usuario un carácter desde teclado como dato de entrada.
Como salida, el programa debe desplegar en pantalla un mensaje indicando si el carácter
ingresado una letra minúscula, una letra mayúscula, un dígito o un signo. 
*/

char caracter;
printf("Ingrese un caracter desde teclado");
scanf("%c", &caracter);

    if (caracter >='A' && caracter<='Z')
    {
        printf("Su caracter es letra mayuscula\n");

    }
    else
    if (caracter >='a' && caracter<='z')
    {

        printf("Su caracter es letra minuscula\n");

    }

    else
    if (caracter >='0' && caracter<='9')
    {

        printf("Su caracter es un digito\n");

    }
        else
    if (caracter >='!' && caracter<='9')
    {

        printf("Su caracter es un digito\n");

    }

system("pause");
}
