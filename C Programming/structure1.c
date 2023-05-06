#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};                 //it's global declaration, in java there is no semicolon at the end of CLASS declaration

int main()
{
    struct Demo obj1;      //these have auto storage class. Concept of storage class is applicable to all the variables who has memory
    struct Demo obj2;     //structure gets memory here.Memory gets allocated to the members of the structure in order in which they are declared

    obj1.i = 11;         
    obj1.f = 90.9;
    obj1.j = 21;

    obj2.i = 51;
    obj2.f = 78.78;
    obj2.j = 99;
    
    printf("%d\n",obj1.i);  //  11
    printf("%d\n",obj2.i);  //  51
    
    return 0;
}