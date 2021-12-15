/******************************************************************************
Completar la funcion Dig_Verif que reciba un número como parámetro y devuelva un dígito verificador calculado de la siguiente manera:

i.	 Se suma cada dígito del numero.
ii.	 Si obtengo un número de más de 2 dígitos, vuelvo a sumar cada dígito del resultado.
iii. Se repite ii. hasta llegar a un resultado de una sola cifra, el cual será el dígito verificador.

Ejemplo: 88578:
i.	 Se realiza la suma 8+8+5+7+8=36.
ii.	 Se suma 3+6=9.
iii. Como el resultado es de una sola cifra paro. El dígito verificador es 9.

 *******************************************************************************/

#include <stdio.h>

int Dig_Verif(int numero)
{
    int sum = 0;
    while (numero > 0 || sum > 9)
    {
        if (numero == 0)
        {
            numero = sum;
            sum = 0;
                }
        sum += numero % 10;
        numero /= 10;
    }

    return sum;
}

int main(int argc, char *argv[])
{

    // Verificacion 0
    if (Dig_Verif(8) == 8)
        printf("Correcto Verificacion 0\n\n");
    else
        printf("Incorrecto Verificacion 0\n\n");

    // Verificacion 1
    if (Dig_Verif(123) == 6)
        printf("Correcto Verificacion 1\n\n");
    else
        printf("Incorrecto Verificacion 1\n\n");

    // Verificacion 2
    if (Dig_Verif(379) == 1)
        printf("Correcto Verificacion 2\n\n");
    else
        printf("Incorrecto Verificacion 2\n\n");

    // Verificacion 3
    if (Dig_Verif(78) == 6)
        printf("Correcto Verificacion 3\n\n");
    else
        printf("Incorrecto Verificacion 3\n\n");

    // Verificacion 4
    if (Dig_Verif(88578) == 9)
        printf("Correcto Verificacion 4\n\n");
    else
        printf("Incorrecto Verificacion 4\n\n");

    return 0;
}