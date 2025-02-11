#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1; // Extract the nth bit
}

int main() {
    int number, n;
    
    // Prompting user for input
    
    scanf("%d", &number);

   
    scanf("%d", &n);

    // Correct printf format
    printf("  %d is: %d\n", n, number, getNthBit(number, n));

    return 0;
}
