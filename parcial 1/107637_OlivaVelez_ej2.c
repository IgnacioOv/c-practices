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

void ejercicio_2(char *c)
{
  int i;
  int sum = 0;

  for (i = 0; c[i]; i++)
  {
    if (c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U' || c[i] == '.' || c[i] == '2' || c[i] == ' ' || c[i] == ',')
    {
      sum;
    }
    else
    {
      sum++;
    }
  }
  printf("%d", sum);
}
void main()
{
  char c[MAX] = {'H', 'O', 'L', 'A', ',', 'E', 'J', 'E', 'R', 'C', 'I', 'C', 'I', 'O', '2', '.'};
  ejercicio_2(c);
}