#include<stdio.h>
int main()

{
    int i;
    int arr[6]={10,4,5,6,7,20};
    int max=arr[0];
    
    for ( i=1;i<6;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("maximum=%d",max);
    return 0;

}