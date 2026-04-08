#include<stdio.h>
int main()

{
    int i;
    int arr[6]={10,4,5,6,7,20};
    int min=arr[0];
    
    for ( i=6;i>0;i--)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("minimum=%d",min);
    return 0;

}