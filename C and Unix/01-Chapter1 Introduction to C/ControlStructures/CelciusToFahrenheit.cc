#include<stdio.h>

int main(int argc, char const *argv[])
{
    int celsius;            //integer counter variable
    double fahrenheit;      //

    /*print table*/
    printf("Celsius | Fahrenheit\n");
    for (celsius= 10; celsius <= 200 ; celsius++)
    {
        fahrenheit=1.8*celsius + 32;
        printf("%7d | %6.2f\n",celsius,fahrenheit);
    }
    
    return 0;
}
