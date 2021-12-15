
// Dado n entero positivo y un listado de n números reales, almacenar los
// números en un vector en el orden de entrada. Informar el contenido del vector
// indicando la posición ocupada por cada número a partir de la primera posición.

#include <stdio.h>
#include <stdlib.h>

void ej(int n, int *list)
{
    int i;
    int x;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        list[i] = x;
        printf("Posicion %d , valor %d \n", i, x);
    }
}

void main()
{

    int n = 5;
    int list[n];
    ej(n, list);
}