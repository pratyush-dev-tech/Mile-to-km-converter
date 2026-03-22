#include<stdio.h>
int main()
{
    float cm,inch;
    printf("Enter a number in cm:");
    scanf("%f",&cm);
     
       inch=cm*3937;
       printf("In inch=%.3f",inch);
       return 0;
}