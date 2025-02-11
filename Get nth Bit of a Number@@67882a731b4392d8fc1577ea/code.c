#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1; // Extract the nth bit
}

int main() {
    int number, n;
    
    // Prompting user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the bit position to check: ");
    scanf("%d", &n);

    // Correct printf format
    printf("The %dth bit of %d is: %d\n", n, number, getNthBit(number, n));

    return 0;
}
