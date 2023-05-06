#include<stdio.h>

struct Demo
{
    int iA;
    float fB;
    double dD; 
    int *iptr;               // Pointer as a member of a structure
    int Arr[3];             // Array as a member of structure
    struct Demo *dptr;     // Self referencial pointer
};

int main()
{
    int iNo1 = 25;
    int iNo2 = 30;
    int iNo3 = 35;
    int iNo4 = 40;
    int iNo5 = 45;

    struct Demo obj1;
    struct Demo obj2;

    struct Demo *optr;

    optr = &obj1;                  //Pointer pointing to object(instance) of a structure 

    optr->iA = 21;
    optr->fB = 3.14f;
    optr->dD = 41.43456;
    optr->iptr = &iNo1;
    optr->Arr[0] = 51;
    optr->Arr[1] = 61;
    optr->Arr[2] = 71;

    printf("%d\n",optr->iA);
    printf("%d\n",*optr->iptr);
    printf("%d\n", optr->Arr[1]);
    
    optr->dptr = &obj2;

    optr->dptr->iA = 81;
    optr->dptr->fB = 45.81f;
    optr->dptr->dD = 101.10234;
    optr->dptr->iptr = &iNo2;
    optr->dptr->Arr[0]= 111;
    optr->dptr->Arr[1]= 121;
    optr->dptr->Arr[2] = 131;
    optr->dptr->dptr = NULL;

    printf("%f\n", optr->dptr->dD);
    printf("%d\n", *optr->dptr->iptr);

    struct Demo sArr[3];                 // One dimensional array of structure.

    sArr[0].iA = 12;
    sArr[0].fB = 24.24f;
    sArr[0].dD = 36.365;
    sArr[0].iptr = &iNo3;
    sArr[0].Arr[0] = 48;
    sArr[0].Arr[1] = 60;
    sArr[0].Arr[2] = 72;
    sArr[0].dptr = NULL;

    printf("%d\n", *sArr[0].iptr);
    printf("%d\n", sArr[0].dptr);

    sArr[1].iA = 84;
    sArr[1].fB = 96.24f;
    sArr[1].dD = 108.365;
    sArr[1].iptr = &iNo4;
    sArr[1].Arr[0] = 120;
    sArr[1].Arr[1] = 132;
    sArr[1].Arr[2] = 144;
    sArr[1].dptr = NULL;

    printf("%d\n", *sArr[1].iptr);
    printf("%d\n", sArr[1].dptr);

    sArr[2].iA = 14;
    sArr[2].fB = 28.28f;
    sArr[2].dD = 42.425;
    sArr[2].iptr = &iNo5;
    sArr[2].Arr[0] = 56;
    sArr[2].Arr[1] = 70;
    sArr[2].Arr[2] = 84;
    sArr[2].dptr = NULL;

    printf("%d\n", *sArr[2].iptr);
    printf("%d\n", sArr[2].dptr);

    return 0;
}