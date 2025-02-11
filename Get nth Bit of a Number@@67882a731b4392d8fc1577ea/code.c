#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1; // Extract the nth bit
}

int main() {
    int number, n;

    // Reading inputs
    scanf("%d", &number);
    scanf("%d", &n);

    // Print only the bit (1 or 0)
    printf("%d\n", getNthBit(number, n));

    return 0;
}

