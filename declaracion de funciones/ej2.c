// Escribir una función que reciba un valor y calcule el factorial del mismo. Si no se
// puede calcular el factorial del valor recibido, la función deberá devolver 0, de lo
// contrario deberá devolver el valor calculado.

#include <stdio.h>

int fact(int num)
{
    int mult = 1;
    while (num >= 1)
    {
        mult = mult * num;
        num--;
    }
    printf("%d", mult);
}

int main()
{
    fact(6);
    return 0;
}