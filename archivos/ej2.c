#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    int padron;
    char nombre_completo[50];
    float nota;
} t_regAlumno;

void leer_alumnos(t_regAlumno alumno)
{
    printf("%d \n", alumno.padron);
    printf("%s \n", alumno.nombre_completo);
    printf("%f \n", alumno.nota);
}
void mostrar(FILE *file)
{
    t_regAlumno alumno;
    file = fopen("alumnos.dat", "r");
    fread(&alumno, sizeof(t_regAlumno), 1, file);
    while (!feof(file))
    {
        leer_alumnos(alumno);
        fread(&alumno, sizeof(t_regAlumno), 1, file);
    }
}

int main()
{

    FILE *alumnos;
    mostrar(alumnos);
    return 0;
}