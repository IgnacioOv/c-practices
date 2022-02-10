#include <stdio.h>

typedef struct
{
    int padron;
    char nombre_completo[50];
    float nota;
} t_regAlumno;

t_regAlumno solicitar_alumno()
{
    t_regAlumno alumno;

    printf("\n\nIngrese padron del alumno (0 para finalizar):");
    scanf("%d", &alumno.padron);

    if (alumno.padron != 0)
    {
        printf("Ingrese nombre completo: ");
        fflush(stdin);
        scanf("%[^\n]%*c", alumno.nombre_completo);

        printf("Ingrese nota: ");
        scanf("%f", &alumno.nota);
    }

    return alumno;
}

void cargar_alumnos(FILE *file)
{
    t_regAlumno r_alumno;

    file = fopen("alumnos.dat", "w");

    if (file == NULL)
        printf("\nNo se pudo crear al archivo!");
    else
    {
        r_alumno = solicitar_alumno();

        while (r_alumno.padron != 0)
        {
            fwrite(&r_alumno, sizeof(t_regAlumno), 1, file);
            r_alumno = solicitar_alumno();
        }

        fclose(file);
    }
}

void main()
{
    FILE *file_alumnos;

    cargar_alumnos(file_alumnos);
}