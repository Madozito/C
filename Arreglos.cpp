#include <stdio.h>
#include <stdlib.h>
const int TAM = 3;
typedef  int arregloEnteros [TAM]; //asi se declara un arreglo, puede ser int char float*/
int main()
{
    
arregloEnteros arre;
int i;
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
printf("Ingrese un valor entero desde teclado y determinaremos si pertenece o no al arreglo\n");
scanf("%d",&valor);
typedef enum {FALSE,TRUE} boolean;
boolean existe = FALSE;
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

if (existe == TRUE)
{
    printf("El valor pertenece al arreglo\n");
}

else

   printf("El valor NO pertenece al arreglo\n");


/*e) Encontrar el menor valor y el mayor valor almacenados en el arreglo, junto con las
posiciones correspondientes.*/

int mayorValor = 0;
int menorValor = 0;

for (i = 1; i < TAM; i++)
{
    if (arre[i] > arre[mayorValor])
    
        mayorValor = i;
    

    else

      if (arre[i] < arre[menorValor])
    
        menorValor = i;
    

}

    printf("El mayor valor ingresado en el arreglo es: %d\n", arre[mayorValor]);
    printf("Su posicion es: %d\n",mayorValor);
    printf("El menor valor ingresado en el arreglo es: %d\n", arre[menorValor]);
    printf("Su posicion es: %d\n",menorValor);

/*f) Leer un valor desde teclado y contar cuántos múltiplos de dicho valor hay en el arreglo*/

int cantMultiplos = 0;
valor = 0;

printf("Ingrese un valor entero desde teclado\n");
scanf("%d",&valor);

for ( i = 0; i < TAM; i++)
{
    if (arre[i] % valor == 0)
    {
        cantMultiplos++;
    }
    
}

printf("Hay %d multiplos de %d en el arreglo\n",cantMultiplos,valor);

/*g) Leer un valor entero desde teclado y mostrar por pantalla los valores del arreglo que estén
almacenados en celdas cuyo índice (posición) sea múltiplo del valor leído.*/ 

valor = 0;

printf("Ingrese un valor entero desde teclado\n");
scanf("%d",&valor);
printf("Valores en posiciones multiplos de %d\n: ",valor);

for ( i = valor; i < TAM; i= i+valor)
{
    printf("%d",arre[i]);
}

/*h) Invertir el arreglo sobre sí mismo (sin usar otro arreglo auxiliar) y desplegarlo por pantalla
luego de invertido */ 

for ( i = 0; i < TAM/2; i++)
{
    valor = arre[i];
    arre[i] = arre[TAM - 1 - i];
    arre[TAM - 1 - i] = valor; 

}
printf ("\nContenido del arreglo luego de invertido: \n");
for (i = 0; i < TAM; i++)
 printf (" %d ", arre[i]); 


system("pause");


}









