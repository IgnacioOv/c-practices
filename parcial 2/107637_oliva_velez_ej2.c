/*
Implementar la funcion ejercicio_2 que reciba una vector de numeros enteros (maximo 1000) y un máximo logico. La funcion debe devolver la cantidad de números pares que se encuentran en posiciones impares.

Considerar que solo se puede recorrer una vez el vector.

Por ejemplo:

  22,28,44,34,78,33

 - Casos : 2
 */

#include <stdio.h>
#define MAX 1000

int ejercicio_2(int vector[MAX], int maximo_logico)
{
    int i;
    int contador = 0;
    for (i = 0; i < maximo_logico; i++)
    {
        if (vector[i] % 2 == 0 && i % 2 != 0)
        {
            contador++;
        }
    }

    printf("%d", contador);
}

int main()
{
    int vector[MAX] = {22, 28, 44, 34, 78, 33};
    int maximo_logico = 6;
    ejercicio_2(vector, maximo_logico);
    return 0;
}