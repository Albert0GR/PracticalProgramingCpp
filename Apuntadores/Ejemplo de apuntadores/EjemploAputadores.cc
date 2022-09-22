/******************************************************************************
Definición, inicializaciòn y uso de apuntadores con variables y arreglos
*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Ejemplo de apuntadores");
    
    /*definir variables de tipo apuntador */
    char c, *ap_c, ca[5];
    int i, *ap_i, num[5];
    float f, *ap_f, real[5];
    
    /* inicializar variables */
    ap_c = &c;
    ap_i = &i;
    ap_f = &f;
    
    *ap_i = 5;
    *ap_f = 67.3;
    *ap_c ='p';
    
    printf(" 1a. c= %c i= %d f= %f \n", *ap_c, *ap_i, *ap_f);
     
    c = 'b';
    i = i*10;
    f = f-5;
    
    printf("2da. c= %c i= %d f= %f \n", *ap_c, *ap_i, *ap_f);
    
    /* ejemplo de apuntadores con arreglos */
    ap_i = num;
    ap_f = real;
    ap_c = ca;
    
    for(int j=0; j<5; j++)
    {
      *(ap_c + j) = 65 + j;
      *(ap_i + j) = 100 + j;
      *(ap_f + j) = 45.5 * j;
    }
    
    printf("Dirección   Valor ca \n");
    for(int j=0; j<5; j++)
    {
      printf ("%x \t %c\n", (ap_c + j), *(ap_c + j));
    }

    return 0;
}