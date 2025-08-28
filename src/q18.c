// Write a C expression that calculates the sum of the squares of three different numbers.

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int sum_of_squares = a * a + b * b + c * c;
    printf("Sum of squares: %d\n", sum_of_squares);

    return 0;
}
