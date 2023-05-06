#include<stdio.h>

int main()
{
    int NO1 = 25;
    int NO2 = 50;
    int NO3 = 75;
    int NO4 = 100;
    int NO5 = 125;

    printf(" %d\n %d\n %d\n %d\n\n", NO1, NO2, NO3, NO4, NO5);


    int Marks[5] = {25, 50, 75, 100, 125};

    int *ptr = &Marks;
    int *ptr2 = &Marks[0];
    
    printf("Array is : %d %d %d %d %d\n", Marks[0], Marks[1], Marks[2], Marks[3], Marks[4]);
    printf("Base Address of Array is : %d\n", ptr );
    printf("Address of first element of Array is : %d\n", ptr2);
    printf("The size of an array is : %d\n\n", sizeof(Marks));


    char Alpha[5] = {'A', 'B', 'C', 'D', 'E'};

    int *Cptr = Alpha;
    int *Cptr2 = &Alpha[0];

    printf("Array of characters is : %c %c %c %c %c\n", Alpha[0], Alpha[1], Alpha[2], Alpha[3], Alpha[4]);
    printf("Base Address of Array is : %d\n", Alpha );
    printf("Address of first element of Array is : %d\n", Cptr2);
    printf("The first element of Alpha is %c\n", *Cptr2);
    printf("%d\n", Alpha);          // name of an array is internally considered as base adress of the array
    printf("The size of an array is : %d", sizeof(Alpha));

    
    return 0;
}