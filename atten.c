#include <stdio.h>
int main() 
{
    int total_classes, attended_classes;
    float percentage;

    printf("Enter total number of classes: ");
    scanf("%d", &total_classes);

    printf("Enter number of classes attended: ");
    scanf("%d", &attended_classes);

    percentage = ((float)attended_classes / total_classes) * 100;

    printf("\nAttendance Percentage = %.2f%%\n", percentage);

    if (percentage >= 75) 
    {
        printf("Status: Allowed to sit in exam \n");
    } else 
    {
        printf("Status: Not allowed to sit in exam \n");
    }

    return 0;
}