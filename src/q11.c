// Write a C expression that performs the following operations in a single line: increment a variable by 1, multiply it by 3, and subtract 10.

#include <stdio.h>  // Required for input/output functions

int main() {
    int x, result;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &x);

    // Perform the operations: increment by 1, multiply by 3, subtract 10
    result = (++x * 3) - 10;

    // Display result
    printf("After incrementing by 1, multiplying by 3, and subtracting 10: %d\n", result);

    return 0;
}
