/* ENUNCIADO EJERCICIO 2

Implementar la funcion ejercicio_2 que reciba un vector de caracteres (maximo 1000) que equivale a un texto terminado en '.'
La funcion debe devolver la cantidad de consonantes que se encuentran en el texto.
Considerar que solo se puede recorrer una vez el vector y las letras son solo mayusculas.

Por ejemplo:

  HOLA, EJERCICIO 2.

  El resultado debe ser: 6

*/
#include <stdio.h>
#define MAX 1000
typedef char vec[MAX];

void ejercicio_2(vec c)
{
    
}
void main()
{
    vec caracteres[MAX] = {'H', 'O', 'L', 'A', ',', 'E', 'J', 'E', 'R', 'C', 'I', 'C', 'I', 'O', '2', '\0'};
    ejercicio_2(caracteres);
}