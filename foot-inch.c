#include<stdio.h>
int main()
{
    float  foot,inches;
    printf("Enter a number in foot:");
    scanf("%f",&foot);
    inches=foot*12;
    printf("inches=%.3f\n",inches);
    return 0;
}