//
// Agregar de invocacion a la funcion intercambiar
//

#include <stdio.h>

void intercambiar(int *x, int *y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}

void main()
{
    int x = 12;
    int y = 5;

    printf("Antes de intercambiar x:%d y:%d\n", x, y);

    intercambiar(&x, &y);

    printf("Luego de intercambiar x:%d y:%d\n\n", x, y);
}
