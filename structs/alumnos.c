// Se tiene un listado de alumnos graduados de Ing en Informatica.
// Por cada alumnos se tiene Nombre, Apellido, Padron, nota final de cada materia

// Se pide:
// a- Cargar informacion -listo
// b- Mostrar Info cargada -listo
// c- Promedio de notas por alumno -listo
// d- Promedio de notas por materia -listo
// e- Ordenar por padron y mostrar todos los datos -listo
// f- Buscar por padron y motrar todos los datos -listo
// h- Ordenar por promedio - listo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUM 3
#define MAX_CAD 30
#define MAX_MATS 3

typedef struct
{
    char nombre[MAX_CAD];
    char apellido[MAX_CAD];
    int padron;
    int nota[MAX_MATS];
    float promedio;

} alumno;

void ordenar_por_dato(alumno alumnos[MAX_ALUM])
{
    int i, j, choice;
    alumno temp;

    printf("Ordenar por \n 1. Padron \n 2. Promedio");
    scanf("%d", &choice);

    for (i = 1; i < MAX_ALUM; i++)
    {
        for (j = 1; j < (MAX_ALUM - i); j++)
        {
            if (choice == 1)
            {
                if (alumnos[j].padron < alumnos[j + 1].padron)
                {
                    temp = alumnos[j];
                    alumnos[j] = alumnos[j + 1];
                    alumnos[j + 1] = temp;
                }
            }
            if (alumnos[j].promedio < alumnos[j + 1].promedio)
            {
                temp = alumnos[j];
                alumnos[j] = alumnos[j + 1];
                alumnos[j + 1] = temp;
            }
        }
    }
}

void mostrar_datos(alumno alumnos[MAX_ALUM])
{
    int i;
    int j;
    float aux;

    for (i = 1; i < MAX_ALUM; i++)
    {
        printf("----Datos---- \n Padron = %d, Nombre = %s, Apellido = %s \n",
               alumnos[i].padron, alumnos[i].nombre, alumnos[i].apellido);
        aux = 0;
        for (j = 1; j < MAX_MATS; j++)
        {
            printf("Nota materia %d : %d \n", j, alumnos[i].nota[j]);
            aux = aux + alumnos[i].nota[j];
        }
        alumnos[i].promedio = aux / (MAX_MATS - 1);
        printf("----Promedio----\n %f\n", alumnos[i].promedio);
    }
}

void cargar_datos(alumno alumnos[MAX_ALUM])
{
    int i;
    int j;
    for (i = 1; i < MAX_ALUM; i++)
    {

        printf("Ingresar nombre alumno %d:\n", i);
        scanf("%s", alumnos[i].nombre);
        printf("Ingresar apellido alumno %d:\n", i);
        scanf("%s", alumnos[i].apellido);
        printf("Ingresar padron alumno %d:\n", i);
        scanf("%d", &alumnos[i].padron);
        for (j = 1; j < MAX_MATS; j++)
        {

            printf("Ingresar nota materia %d :\n", j);
            scanf("%d", &alumnos[i].nota[j]);
        }
    }
}

void promedio_por_materia(alumno alumnos[MAX_ALUM])
{
    int i, j;
    float nota_materia[MAX_MATS];
    for (i = 1; i < MAX_MATS; i++)
    {
        nota_materia[i] = 0;
    }
    for (i = 1; i < MAX_ALUM; i++)
    {
        for (j = 1; j < MAX_MATS; j++)
        {

            nota_materia[j] = nota_materia[j] + alumnos[i].nota[j];
        }
    }
    for (i = 1; i < MAX_MATS; i++)
    {
        nota_materia[i] = nota_materia[i] / (MAX_MATS - 1);
        printf("%f\n", nota_materia[i]);
    }
}

void buscar_padron(alumno alumnos[MAX_ALUM])
{
    int i;
    int busq;
    printf("Ingrese padron para buscar \n");
    scanf("%d", &busq);
    for (i = 1; i < MAX_ALUM; i++)
    {
        if (busq == alumnos[i].padron)
        {
            printf("Nombre: %s \nApellido: %s \nPadron:% d \n", alumnos[i].nombre, alumnos[i].apellido, alumnos[i].padron);
        }
    }
}

int main()
{
    int n;
    alumno alumnos[MAX_ALUM];

    cargar_datos(alumnos);
    printf("\n ----Datos sin ordenar----\n");
    mostrar_datos(alumnos);
    printf("\n ----Datos ordenados----\n");
    ordenar_por_dato(alumnos);
    mostrar_datos(alumnos);
    printf("\n ----Promedio de nota por materia----\n");
    promedio_por_materia(alumnos);
    buscar_padron(alumnos);
    ordenar_por_dato(alumnos);
    printf("\n ----Datos ordenados----\n");
    mostrar_datos(alumnos);
    return 0;
}
