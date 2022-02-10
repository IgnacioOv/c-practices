// Escribir una función que reciba un mes y un año; y devuelva la cantidad de días
// del mes, considerando los años bisiestos.
// Tenga en cuenta que un año bisiesto es aquel divisible por 4, salvo que sea
// divisible por 100, en cuyo caso también debe ser divisible por 400.

#include <stdio.h>

int dias(int m, int y)
{
    int num_dias;

    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        num_dias = 30;
    }
    else
    {
        if (m == 2)
        {
            if (y % 4 == 0 || (y % 100 == 0 && y % 400 == 0))
            {
                num_dias = 29;
            }
            else
            {
                num_dias = 28;
            }
        }
        else
        {
            num_dias = 31;
        }
    }
    printf("%d", num_dias);
}

int main()
{
    int m, y;
    printf("Ingresa mes");
    scanf("%d", &m);
    printf("Ingresa anio");
    scanf("%d", &y);
    dias(m, y);
    return 0;
}