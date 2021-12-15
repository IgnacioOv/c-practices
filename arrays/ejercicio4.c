// Cargar una serie de números reales en un vector. No se conoce la cantidad
// exacta de datos, pero se sabe que no superan los 100. No se conocen cotas
// para los datos. Informar el valor máximo, la cantidad de veces que aparece y
// la/s posición/es que ocupa

#include <stdio.h>
#define MAX 100

int main()
{
    int vec[MAX] = {5, 5, 1, 4};
    int i;
    int j;
    int sum = 0;
    int maximo = 0;
    for (i = 0; i < MAX; i++)
    {
        if (maximo < vec[i])
        {
            maximo = vec[i];
        }
    }
    for (j = 0; j < MAX; j++)
    {
        if (vec[j] == maximo)
        {
            sum++;
        }
    }
    printf(" el numero %d se repite %d veces", maximo, sum);

    return 0;
}