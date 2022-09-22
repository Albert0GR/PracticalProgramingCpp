#include<stdio.h>

int validation(int num);
int main(){
  int a,b,s=0;
  if ((scanf("%d %d",&a,&b)) && (a>-70000) && (b<70000));
    //printf("%d %d",min,max);
  while(a<b){
    if(validation(a) == 1){
        //printf("impar %d\n",min);
      s+=a;
    }
    a++;
  }
  printf("%d",s);
//return 0;

}


int validation(int m){

  if(m % 2 == 0){
    return 0;
  }else{
      //printf("impar %d",num);
    return 1;
  }
  
}