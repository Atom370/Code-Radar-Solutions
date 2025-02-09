#include <stdio.h>

int main() {
    int month;

    // Taking input from the user
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    // Checking the number of days based on month
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("30\n");
            break;
        case 2:
            printf("28\n");  // Assuming February has 28 days (non-leap year)
            break;
        default:
            printf("Invalid month\n");  // Handling invalid inputs
    }

    return 0;
}
