/*
Implementar la funcion ejercicio_2 que reciba un vector de numeros enteros (máximo 1000) y un máximo logico.
La función debe devolver la cantidad de números pares que se encuentran en posiciones impares.
Considerar que solo se puede recorrer una vez el vector.

Por ejemplo:

  22,23,44,34,78,32

 - Casos: 3

*/

#include <stdio.h>

#define MAX 1000

int ejercicio_2(int vec[MAX], int ml)
{
    int i;
    int casos = 0;
    for (i = 0; i < ml; i++)
    {
        if (vec[i] % 2 == 0 && i % 2 != 0)
        {
            casos++;
        }
    }
    return casos;
}

int main()
{
    int vec[MAX] = {22, 23, 44, 34, 78, 32};
    ejercicio_2(vec, 6);
    return 0;
}