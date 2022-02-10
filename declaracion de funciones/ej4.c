// Escribir una función que reciba un número y devuelva un valor booleano
// indicando si el número recibido es ó no primo. Si desconoce como devolver un
// valor booleano, puede devolver 0, en caso de No ser primo; y 1, si lo es.

#include <stdio.h>
#include <stdbool.h>

bool prime(int n)
{
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum++;
        }
    }
    if (sum == 2 || n == 1)
    {
        printf("primo");
    }
    else
    {
        printf("no primo");
    }
}

int main()
{
    prime(5);
    return 0;
}