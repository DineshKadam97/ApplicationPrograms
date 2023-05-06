#include<stdio.h>

struct hello
{
    int no;
    char ch1;
    char ch2;
    float f;
    int i;
};             //its always better to use this syntax as less memory gets wasted in this syntax

struct Demo
{
    int no;
    char ch1;       //interview madhe character ghalu naka!!
    float f;
    char ch2;
    int i;
};

int main()
{
    struct hello obj;  
    struct Demo obj1;

    printf("%d\n",sizeof(obj));  //16byte
    printf("%d\n",sizeof(obj1)); //
    
    return 0;
}