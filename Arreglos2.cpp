/*Ejercicio 2
Escribir un programa en C++ en el cual se defina un tipo arreglo de N enteros (siendo N una
constante simbólica) y luego realice las siguientes acciones: */
#include <stdio.h>
#include <stdlib.h>
const int N = 3;
typedef int arregloEnteros[N];
typedef enum {FALSE, TRUE} boolean; 

int main()
{
    /*a) Cargar un arreglo del tipo definido con valores leídos desde teclado. */
    arregloEnteros arre1, arre2;
    int i;
    printf("Carga del primer arreglo:\n");
    for (i = 0; i <= N; i++) // CARGA primer arreglo
    {
        printf("Ingrese un valor para la celda [%d]:\n", i);
        scanf("%d", &arre1[N]);
    }
    /*b) Cargar otro arreglo del tipo definido, ordenándolo a medida que se leen los números. */
    int aux, temp;

    printf("Carga ordenada del segundo arreglo:\n");

    for (i = 0; i <= N; i++) // CARGA segundo arreglo
    {
        printf("Ingrese un valor para la celda [%d]:\n", i);
        scanf("%d", &arre2[N]);
        aux = i;
        if (aux > 0)
        {
            while (arre2[aux - 1] > arre2[aux] && aux > 0)
            {
                temp = arre2[aux];
                arre2[aux] = arre2[aux - 1];
                arre2[aux - 1] = temp;
                aux--;
            }
        }
    }
    /*c) Desplegar por pantalla el contenido de ambos arreglos. */

    printf("\nContenido del primer arreglo: ");

    for (i = 0; i < N; i++)
        printf(" %d ", arre1[i]);

    printf("\nContenido del segundo arreglo: ");

    for (i = 0; i < N; i++)
        printf(" %d ", arre2[i]);

    /*d) Buscar los dos enteros menores del primer arreglo y desplegarlos por pantalla.*/

    int men1 = arre1[0], men2 = arre1[1];
    if (arre1[1] < arre1[0])
    {
        men1 = arre1[1];
        men2 = arre1[0];
    }
    for (i = 2; i < N; i++)
    {
        if (arre1[i] < men2)
        {
            men2 = arre1[i];
            if (men2 < men1)
            {
                temp = men1;
                men1 = men2;
                men2 = temp;
            }
        }
    }
    printf("\nLos dos enteros menores son %d y %d", men1, men2);

    boolean iguales = TRUE;
    i = 0;
    do
    {
        if (arre1[i] != arre2[i])
            iguales = FALSE;
        else
            i++;
    } while (iguales == TRUE && i < N);
    if (iguales)
        printf("\nLos arreglos son iguales");
    else
        printf("\nLos arreglos no son iguales");
    system("pause");
}