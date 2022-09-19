#include<stdio.h>
#include<string.h>

int main(){
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
    struct  curso *apCurso;

    apCurso = listaCursos;

    apCurso -> clave = 100;
    strcpy(apCurso ->nombre , "Fundamets");
    strcpy(apCurso ->desc ,"progr...");
    apCurso ->duracion =45;
    apCurso ->precio =200.00;
    apCurso ->sig =NULL;

    for (int i = 1; i < 3; i++)
    {
        scanf("%d",&listaCursos[i].clave);
        getchar();
        scanf("%s",listaCursos[i].nombre);//gets(listaCursos->nombre);
        scanf("%s",listaCursos[i].desc);//gets(listaCursos->desc);
        scanf("%d",&listaCursos[i].duracion);
        scanf("%f",&listaCursos[i].precio);
        
    }

    printf("Clave \tNombre \t\tDescripcion \t\tDuracion \tPrecio \n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\t%s\t\t%s\t\t%3d\t\t%5.2f\n",listaCursos[i].clave,listaCursos[i].nombre,listaCursos[i].desc,listaCursos[i].duracion,listaCursos[i].precio);
    }

        return 0;

    
}