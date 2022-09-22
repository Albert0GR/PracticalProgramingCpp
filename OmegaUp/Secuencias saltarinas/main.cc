#include <stdio.h>
#include <stdlib.h>

int busqueda(int *numeros,int tam);
int search_num (int *array2, int N, int max , int min);
int validate_num(int *arr,int N,int val);

 int main(void)
{        
    int *numeros;
    int n=0;  
    int x=scanf("%d",&n);
    if((n>=2) && (n<=1000)){
        numeros=(int*) malloc (n * sizeof(int));
    
      /*for(int i=0;i<n;i++){
           int x=scanf("%d",&numeros[i]);
      }*/
      int i=0;
      while(i<n && numeros[i] <= 999 && numeros[i]>= -999){
        int x=scanf("%d",&numeros[i]);
        i++;
      }
    
      printf("%d",busqueda(numeros,n));
    }else{
      return 0;
    }

    
}

int busqueda(int *numeros,int tam){
    
    int *dif;
    dif=(int*) malloc (tam * sizeof(int));
    int sum=0,men=999;
    int max=0,min=999;
    
    for(int i=0;i<tam-1;i++){
        dif[i]=abs(*(numeros+1)-*numeros);
        if(dif[i]>max)max=dif[i];
        else if(dif[i]<min)min=dif[i];
        sum+=dif[i];     //suma de diferencias
        
        //printf("%d",dif[i]);
        //if(dif[i]<men);men=dif[i];
        numeros++;
        }
        //printf("max=%d",max);
        //printf("min=%d",min);
        int salt=(tam-1)*tam/2;//salt+=(i+1); //suma de numeros naturales
    if(sum==salt){            //verificacion de sucesion saltarina
        return 0;
    }
    else{
     int res=search_num(dif,tam-1,max,min);
        return res;
            }
        
    
}


int search_num (int *array2, int N, int max , int min){
//int flag;
int res;
int men=999;



    for(int j=min;j<=max;j++){
        //flag = validate_num(array2,N,j);
        if(validate_num(array2,N,j)==0){
          res=j;
            if(res<men)men=res;
        }
    }
        return men;
    
}

int validate_num(int *array2,int N,int val){
    int res=0;

    for(int i=0;i<N;i++){
      if(val==*array2){
          
          //printf("val=%d vs array2[%d]=%d",val,i,array2[i]);
         res+=1;
         //break;
      }else{
          //printf("val=%d vs array2[%d]=%d",val,i,array2[i]);
          res=res;
      }
      array2++;
   }

    return res;
}