// Escribir una función que reciba un valor n, entero, y devuelva la suma de los
// valores entre 0 y n.

#include <stdio.h>

int suma(int n)
{
    int sum = 0;
    while (n >= 1)
    {
        sum = sum + n;
        n--;
    }
    return sum;
}

int main()

{
    suma(4);
    return 0;
}
