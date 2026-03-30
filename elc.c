#include <stdio.h>

int main() {
    char name[50];
    int units;
    float bill;
    char choice;

    do 
    {
        printf("\nEnter Customer Name: ");
        scanf("%s", name);

        printf("Enter Units Consumed: ");
        scanf("%d", &units);

        if (units <= 100) {
            bill = units * 5;
        } 
        else if (units <= 200) {
            bill = (100 * 5) + ((units - 100) * 7);
        } 
        else {
            bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        }

        printf("\n--- Electricity Bill ---\n");
        printf("Name: %s\n", name);
        printf("Units Consumed: %d\n", units);
        printf("Total Bill: Rs. %.2f\n", bill);

        printf("\nDo you want to calculate another bill? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you!\n");

    return 0;
}