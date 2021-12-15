// Dado un vector a de longitud n y un elemento p del mismo tipo que los
// elementos del vector, buscar p en el vector a y devolver la posición que ocupa
// en caso de encontrarlo o una señal en caso contrario. Suponer que no hay
// repeticiones.

#include <stdio.h>

int main()
{
    int i;
    int vec_a[4] = {3, 5, 8, 7};
    int n = sizeof(vec_a) / sizeof(vec_a[0]);
    int p = 7;
    int *pos = NULL;
    for (i = 0; i < n; i++)
    {
        if (vec_a[i] == p)
        {
            pos = &i;
            printf(" posicion %d", *pos);
        }
    }
    if (pos == NULL)
    {
        printf("Not found");
    }
    return 0;
}