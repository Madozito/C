#include <stdio.h>
#include <stdlib.h>
/*const int TAM = 10;
typedef  int arregloEnteros [TAM]; //asi se declara un arreglo, puede ser int char float*/
int main()
{
/*arregloEnteros arre;
int i;*/
/*
for (i = 0; i <= TAM ; i++)   // CARGA
{
    printf("Ingrese un valor para la celda [%d]:\n",i);
    scanf("%d",&arre[i]);
}

printf("Los valores ingresados son: \n"); // MOSTRAR/IMPRIMIR
for (i = 0; i <= TAM; i++)
{
    printf("\n[%d]: %d",i,arre[i]);
}
*/
/*Ejercicio 1
Escribir un programa en C++ en el cual se defina un tipo arreglo de N enteros (siendo N una
constante simbólica) y luego realice las siguientes acciones:
a) Cargar un arreglo del tipo definido con valores leídos desde teclado.
b) Desplegar por pantalla el contenido del arreglo.
c) Calcular el promedio de los valores almacenados en el arreglo.
d) Leer un valor entero desde teclado y determinar si pertenece o no al arreglo.
e) Encontrar el menor valor y el mayor valor almacenados en el arreglo, junto con las
posiciones correspondientes.
f) Leer un valor desde teclado y contar cuántos múltiplos de dicho valor hay en el arreglo.
g) Leer un valor entero desde teclado y mostrar por pantalla los valores del arreglo que estén
almacenados en celdas cuyo índice (posición) sea múltiplo del valor leído.
h) Invertir el arreglo sobre sí mismo (sin usar otro arreglo auxiliar) y desplegarlo por pantalla
luego de invertido. 

 a) Cargar un arreglo del tipo definido con valores leídos desde teclado.*/
const int TAM = 5;
typedef int arregloEnteros [TAM];
int i;
arregloEnteros arre;
for ( i = 0; i < TAM; i++)
{
    printf("Cargue un arreglo, posicion [%d]: \n",i);
    scanf("%d",&arre[i]);
}


/*b) Desplegar por pantalla el contenido del arreglo.*/

printf("El contenido de su arreglo es\n");

for (i = 0; i < TAM; i++)
{
    printf("[%d]: %d\n",i,arre[i]);
}
/*c) Calcular el promedio de los valores almacenados en el arreglo.*/
float promedio;
float suma = 0;  // El suma lo usamos para sumar todos los valores dentro del arreglo

for ( i = 0; i < TAM; i++)
{
    suma = suma + arre[i];
    promedio = suma/TAM;
}

printf("El promedio es: %5.2f\n", promedio);
/*d) Leer un valor entero desde teclado y determinar si pertenece o no al arreglo.*/

int valor;
printf("Ingrese un valor entero desde teclado y determinaremos si pertenece o no al arreglo");
scanf("%d",&valor);
typedef enum {FALSE,TRUE} boolean;
boolean existe;
i = 0;
do
{     
    if (arre[i] == valor)
    {
        existe = TRUE;
    }
    else
        i++;

    
} while (existe == FALSE && i < TAM);

 system("pause");
}
/*e) Encontrar el menor valor y el mayor valor almacenados en el arreglo, junto con las
posiciones correspondientes.*/

int mayorValor = 0, menorValor= 0;





