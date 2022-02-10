/* 
Escribir una función en C que reciba como parámetro dos numeros enteros y devuelva al modulo invocante los siguientes valores:
- la diferencia entre ambos numeros, y
- la cantidad de numeros pares que hay entre estos numeros -excluyendolos del valor calculado-. 

NOTA: Tener en cuenta que los numeros con los que se invoca la funcion pueden estar en cualquier orden.

Por ejemplo: 

-> Si los números con los que se invoca la funcion son 18 y 10

	La función debe devolver al módulo invocante (NO IMPRIMIR), los valores 8 y 3, donde el 8 representa la diferencia y el 3 la cantidad de valores pares excluyendo 10 y 18.

-> El resultado deberia ser similar si la funcion furea invocada con los numeros 10 y 18.

Escribir un programa que invoque dicha funcion y la pruebe con los siguientes valores:
100 y 110
111 y 98

NOTA: invocar la funcion con los numeros en el orden indicado.

*/

#include <stdio.h>

int modulo(int a, int b)
{
    int diferencia, pares;
    diferencia = a - b;
    pares = 0;
    int resultado[2];
    if (a > b)
    {
        for (int i = b; i <= a; i++)
        {
            if (i % 2 == 0 && i != a && i != b)
            {
                pares++;
            }
        }
    }
    else
    {
        for (int i = a; i <= b; i++)
        {
            if (i % 2 == 0 && i != a && i != b)
            {
                pares++;
            }
        }
    }

    resultado[0] = diferencia;
    resultado[1] = pares;
    return resultado;
}

int main()
{
    int a, b;
    modulo(100, 110);
    modulo(111, 98);

    return 0;
}