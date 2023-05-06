#include<stdio.h>
int main()
{

   int Arr[4] = {10,20,30,40};


printf("%d\n",Arr[0]);            //  10
printf("%d\n",Arr[2]);            //  30
printf("%d\n",Arr[3]);            //  40
printf("%d\n",sizeof(Arr));       //  16
printf("%d\n",sizeof(Arr[2]));    //  4
printf("%d\n",Arr);               //  100
printf("%d\n",&Arr);              //  100 
printf("%d\n",&Arr[0]);           //  100
printf("%d\n",&Arr[2]);           //  108
printf("%d\n",&Arr[3]);           //  112



int Array[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
// Arr is two dimentional array
// which contains 3 one dimentonal array
// each one dimentional array contains 4 elements
// and each element is of type integer  



Array[0][0] = 1;
Array[0][1] = 2;
Array[0][2] = 3;
Array[0][3] = 4;

Array[1][0] = 5;
Array[1][1] = 6;
Array[1][2] = 7;
Array[1][3] = 8;

Array[2][0] = 9;
Array[2][1] = 10;
Array[2][2] = 11;
Array[2][3] = 12;

 return 0;
}