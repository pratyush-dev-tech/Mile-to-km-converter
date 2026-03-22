#include<stdio.h>
int main()
{
    float km,mile;
    printf("Enter a number in mile:");
    scanf("%f",&mile);
      km= mile * 1.609 ;
      printf("Distance in kilometers=%f\n",km);
      return 0;
    
}