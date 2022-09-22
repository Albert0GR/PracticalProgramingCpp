#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,cant,tam=20;

    
    scanf("%d",&cant);   

    char *arreglo[cant];
    char* dato;
    char *arregloopc[cant];
    char* opc;
    char name_select[20];

    for(i=0; i<cant; i++){
        
        dato = (char*) malloc(tam);
        scanf("%s",dato);
        arreglo[i] = dato;
        opc = (char*) malloc(tam);
        scanf("%s",opc);
        arregloopc[i] = opc;
    }
   
  scanf("%s", name_select);

        for(int i=0;i<cant;i++){
          if(strcmp(name_select,arreglo[i])==0){
          printf("%s",arregloopc[i]);
        }
  }
    return 0;
}