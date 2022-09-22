#include<stdio.h>
#include<string.h>
//string type definitions
#define STRMAX 40
typedef char MyStringType[STRMAX];  //declares a new type of string                    

int main(int argc, char const *argv[])
{
    //variable declarations
    MyStringType yourName,myMessage;
    //store a message
    strcpy(myMessage,"This is an example");
    // get de users name   
    printf("please enter you name ");

    scanf("%s",yourName);

    printf("%s, %s \n", myMessage ,yourName);  
    return 0;
}

