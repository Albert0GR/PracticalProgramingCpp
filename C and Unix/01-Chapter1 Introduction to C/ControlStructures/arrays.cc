#include<stdio.h>

#define MAXSIZE 10                   
int main(int argc, char const *argv[])
{
    int i;
    int celsius[MAXSIZE];            //integer counter variable
    double fahrenheit;      //

    for ( i = 0; i < MAXSIZE; i++)
    {
        printf("enter celsius temperature #%d: ",i);
        scanf("%d",&celsius[i]);
    }
    
    /*print table*/
    printf("Celsius | Fahrenheit\n");
    for (i= 0; i <= MAXSIZE ; i++)
    {
        fahrenheit=1.8*celsius[i] + 32;
        printf("%7d | %6.2f\n",celsius[i],fahrenheit);
    }
    
    return 0;
}
