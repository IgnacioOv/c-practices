// /*
// Escribir una función en C que reciba como parámetro un numero entero y devuelva al modulo invocante los siguientes valores:
// - el resultado de multiplicar sus digitos pares y
// - la cantidad de digitos que cumplieron la condicion y fueron procesados.

// Por ejemplo:

// -> el número con el que se invoca la funcion es 25831
// -> los digitos pares son 2 y 8
// -> La funcion debe devolver: Producto = 16 Digitos Procesados = 2

// Escribir un programa que invoque dicha funcion y la pruebe con los siguientes valores:

// 25831 	=> Producto = 16 Digitos Procesados 2
// 444	        => Producto = 64 Digitos Procesados 3
// 1357	=> Producto = 0 Digitos Procesados 0
// 2468	=> Producto = 384 Digitos Procesados 4
// 8230	=> Producto = 0 Digitos Procesados 3

// Nota: para la resolucion de este ejercicio no se pueden utilizar arreglos.

// */

#include <stdio.h>

void multiplicar_pares(int num)
{
    // Declaro Variables

    int resto, digito;
    int mult = 1;
    int count = 0;

    while (num > 0)
    {

        digito = num % 10;

        num = num / 10;

        resto = digito % 2;

        if (resto == 0)
        {

            mult = digito * mult;
            count++;
        }
    }
    if (count == 0)
    {
        mult = 0;
    }
    printf("Producto: %d Procesados: %d\n", mult, count);
}

void main()
{
    multiplicar_pares(25831);
    multiplicar_pares(444);
    multiplicar_pares(1357);
    multiplicar_pares(2468);
    multiplicar_pares(8230);
}
