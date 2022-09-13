//apuntadores y apso de paramtreo por referecncia
#include<stdio.h>

void incializaValor(int tam,int  n[20]);
void despliega(int tam,int *n);
void incializaReferencia(int tam, int *n);

int main(){


//definir variable de tipo contador
int tam, *ap_i, num[20];

// inicializar variables
ap_i= num;

printf("paso de parametros por valor ");
incializaValor(20,num);   //paso de parametros por valor - hace una copia
despliega(20,num);

printf("paso de parametros por referencia ");
incializaReferencia(20,num);   //paso de parametros por referencia
despliega(20,num);

return 0;


}

void incializaValor(int tam,int  n[20]){
    for (int j = 0; j < tam; j++)
    {
        n[j]=j*20;
    }
    
}

void despliega(int tam,int *n){

    for (int j = 0; j < tam; j++)
    {
        printf("num[%d]= %d \n",j,*(n+j));
    }   

}

void incializaReferencia(int tam, int *n){
    for (int j = 0; j < tam; j++)
    {
        *(n++)=j*20;
    }
    
}