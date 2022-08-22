/*
Escribir una función en C que reciba como parámetro un numero entero y devuelva al modulo invocante los siguientes valores:
- el resultado de multiplicar sus digitos impares y
- la cantidad de digitos que cumplieron la condicion y fueron procesados.

Por ejemplo:
-> el número con el que se invoca la funcion es 25831
-> los digitos impares son 5, 3 y 1
-> La funcion debe devolver los valores: 15 y 3. El 15 por el producto y el 3 por la cantidad de dígitos.

Escribir un programa que invoque dicha funcion y la pruebe con los siguientes valores:

25831     => Producto = 15 Digitos Procesados: 3
333            => Producto = 27 Digitos Procesados: 3
1357    => Producto = 105 Digitos Procesados: 4
2468    => Producto = 0 Digitos Procesados: 0
8230    => Producto = 3 Digitos Procesados: 1

Nota: para la resolucion de este ejercicio no se pueden utilizar arreglos.

*/
#include <stdio.h>
void multiplicar_impares(int num)
{
    int digito;
    int digitos_procesados = 0;
    int producto = 0;
    while (num != 0)
    {
        digito = num % 10;
        num /= 10;
        if (digito % 2 != 0)
        {
            if (producto == 0)
            {
                producto = 1;
            }
            producto = producto * digito;
            digitos_procesados++;
        }
    }
    printf("Producto = %d  Digitos Procesados = %d \n", producto, digitos_procesados);
}

int main()
{
    multiplicar_impares(25831);
    multiplicar_impares(333);
    multiplicar_impares(1357);
    multiplicar_impares(2468);
    multiplicar_impares(8230);
    return 0;
}
