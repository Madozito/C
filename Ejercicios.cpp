
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
/*
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
    if (caracter >='!' && caracter<='/')
    {

        printf("Su caracter es un signo\n");

    }

    else

    printf("Su numero no es ni mayuscula, minuscula, digito, simbolo");

system("pause");
*/
/*Escribir un programa en C++ que lea como entrada dos números enteros desde el teclado. Como
salida, el programa debe desplegar por pantalla el de mayor valor. 
*/
/*
int a,b;

printf("Escriba un numero entero por teclado\n");
scanf("%d",&a);
printf("Escriba otro numero entero por teclado\n");
scanf("%d",&b);

if (a > b)
{
   printf("El numero %d es mayor que el numero %d",a,b);

} else

   printf("El numero %d es mayor que el numero %d\n",b,a);

   system("pause");
*/
/*Ejercicio 4
Escribir un programa en C++ que lea como entrada tres números reales desde el teclado. Como
salida, el programa debe desplegar por pantalla el de mayor valor y el de menor valor. 


float num1, num2, num3, menor, mayor;
printf("Ingrese el primer numero real\n");
scanf("%f",&num1);
printf("Ingrese el segundo numero real\n");
scanf("%f",&num2);
printf("Ingrese el tercer numero real\n");
scanf("%f",&num3);

menor = num1;
mayor = num1;

if(num2> mayor)
  mayor = num2;
else
    if(num2 < menor)
    menor = num2;
if(num3 > mayor)
  mayor = num3;
else
   if (num3 < menor)
   menor = num3;

printf("El numero mayor es %2.1f\n",mayor);
printf("El numero menor es %2.1f\n",menor);

system("pause");
*/
/*Ejercicio 5
Escribir un programa en C++ que lea como entrada dos números enteros a y b desde teclado.
Como salida, el programa debe desplegar su cociente y su resto (debe controlarse que b≠0 antes
de hacer la división y el resto, en caso que b=0 debe desplegarse un mensaje de error). 


int a,b;
int cociente, resto;

printf("Ingrese el primer numero entero\n");
scanf("%d",&a);
printf("Ingrese el segundo numero entero\n");
scanf("%d",&b);

if(b == 0)
  printf("Error, numero invalido\n");

else

cociente = a/b;
resto = a%b;

printf("El cociente es: %d\n",cociente);
printf("El resto es: %d\n",resto);

system("pause");
*/

/*Ejercicio 6: Escribir un programa en C++ que lea como dato de entrada una nota desde teclado. Como salida,
El programa debe emitir un mensaje mostrando la calificación correspondiente de acuerdo con la
tabla. ¿Es posible resolver este problema de dos maneras diferentes, usando estructuras de
control distintas?. Si es posible, escriba los dos algoritmos en C++. 

// Primera forma de resolver con IF anidados
int nota;

printf("Ingrese una nota entre 0 y 12\n");
scanf("%d",&nota);

if(nota >= 0 && nota <= 3)
  printf("Usted reprobo\n");
else
    if (nota >= 4 && nota <= 7)
       printf("Nota aceptable\n");
    else
        if (nota >= 8 && nota <= 11)
           printf("Nota buena\n");
        else
            if(nota == 12)
              printf("Nota excelente\n");
            else
               printf("Fuera del rango\n");
               
// Segunda forma de resolver con SWITCH 

printf("Ingrese una nota entre 0 y 12\n");
scanf("%d",&nota);

switch (nota)
{
case 0:
case 1:
case 2:
case 3: printf("Usted reprobo\n");
    break;
case 4:
case 5:
case 6:
case 7: printf("Nota aceptable\n");
    break;
case 8:
case 9:
case 10:
case 11: printf("Nota buena\n");
    break;
case 12: printf("Nota excelente\n");
    break;
default: printf("Fuera del rango\n");
}

system("pause");

*/
/*Ejercicio 7: Escribir un programa en C++ que lea como dato de entrada la capacidad (en litros) desde teclado.
Como salida, El programa debe emitir un mensaje mostrando el estado de la botella de acuerdo
con la tabla. ¿Es posible resolver este problema de dos maneras diferentes, usando estructuras de
control distintas?. Si es posible, escriba los dos algoritmos en C++. 
float capacidad;

printf("Ingrese la capacidad (en litros)\n");
scanf("%f",&capacidad);

if(capacidad >= 0 && capacidad < 0.31)
  printf("Su botella esta vacia\n");
else
    if(capacidad > 0.3 && capacidad <= 0.7)
      printf("Su botella tiene capacidad media\n");
    else
        if(capacidad > 0.7 && capacidad <= 1)
          printf("Su botella esta llena\n");
        else
            printf("Capacidad fuera del rango\n");

            system("pause");
*/
/*Ejercicio 8
Escribir un programa en C++ que imprima en pantalla la tabla ASCII, es decir, un listado de la
siguiente forma:
 código - carácter
 código - carácter
 ...
 código - carácter
desde el carácter cuyo código ASCII es el 32 hasta el carácter cuyo código ASCII es el 256. El
programa debe ir mostrando el listado al usuario en grupos de 20 líneas. Antes de continuar con
las siguientes 20 líneas, el programa deberá pedirle al usuario que le indique cuando desea
continuar. 


unsigned char i;
int cantLineas = 0;
for (i = 32; i <= 256 ; i++)
{
    printf("%3d - %1c\n", i, i);
    cantLineas++;

    if (cantLineas == 20)
    {
       cantLineas = 0;
       printf("Presione enter para continuar: ");
       fflush(stdin);
       getchar (); 

    }   

}
*/
/*Ejercicio 9
Escribir un programa en C++ que pida como entrada un conjunto de caracteres (el programa
deberá ir pidiendo al usuario que ingrese los caracteres de a uno hasta que se introduzca el *, que
servirá para indicar que no se desea ingresar más caracteres). Como salida, el programa debe
mostrar en pantalla la cantidad de vocales que se ingresaron. Realícelo de dos formas diferentes:
a) asuma que el conjunto puede estar vacío en cuyo caso sólo se ingresará el *.
b) asuma que el conjunto nunca puede estar vacío. 
*/

// Parte a
char car;
int cantVocales = 0;

printf("Ingrese un conjunto de caracteres de a uno\n");
fflush(stdin);
scanf("%c",&car);

while (car != '*')
{
    switch (car)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': cantVocales++; 
        break;
    }
 printf ("Ingrese un caracter: ");
 fflush (stdin);
 scanf ("%c", &car); 
}
printf("La cantidad de vocales es: %d", cantVocales);

system("pause");

}
