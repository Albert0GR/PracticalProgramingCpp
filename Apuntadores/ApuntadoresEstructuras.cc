//Programa de apuntadores con estructuras y arreglos de estructuras.
/**************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    printf("Apuntadores con estructuras y arreglos de estructuras\n");
    
    struct curso
    {
        int clave;
        char nombre[20];
        char desc[50];
        int duracion;
        float precio;
        int *sig;
    };

    struct curso listaCursos[3];
    struct curso *apCurso;

    apCurso = listaCursos;

    apCurso->clave =100;    /* Notación de apuntadores -> */
    strcpy(apCurso->nombre,"FP");
    strcpy(apCurso->desc, "Básico en lenguaje C");
    apCurso->duracion = 45;
    apCurso->precio = 200.00;
    apCurso->sig = NULL;
    
    apCurso++;
    
    /*
    for(int i=1; i<3; i++)    /* Lectura -Notacion del arreglo  . *
    {
        scanf("%d", &listaCursos[i].clave);
        getchar();
        scanf("%s", listaCursos[i].nombre);  /* nombre = &nombre[0] *
        scanf("%s", listaCursos[i].desc);
        scanf("%d", &listaCursos[i].duracion);
        scanf("%f", &listaCursos[i].precio);
    } */

    for(int i=1; i<3; i++)    /* Lectura -Notacion del apuntador  -> */
    {
        scanf("%d", &apCurso->clave);
        getchar();
        scanf("%s", apCurso->nombre);  /* nombre = &nombre[0] */
        scanf("%s", apCurso->desc);
        scanf("%d", &apCurso->duracion);
        scanf("%f", &apCurso->precio);
        
        apCurso++;
    }


    printf ("Clave \tNombre \tDescripcion \t\t\tDuracion \tPrecio\n");
    for(int i=0; i<3; i++)
    {
        printf("%d\t%s\t\t%s\t\t%3d\t\t%5.2f\n", listaCursos[i].clave, listaCursos[i].nombre,
                        listaCursos[i].desc, listaCursos[i].duracion, listaCursos[i].precio );
    }
    
    return 0;
}