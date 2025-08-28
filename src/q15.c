// Write an expression that checks if a number is both positive and even.

#include <stdio.h>

int main() {
    int n;
    int isPositiveAndEven;
    printf("Enter a number: ");
    scanf("%d", &n);
    isPositiveAndEven = (n > 0) && (n % 2 == 0);
    printf("The number %d is positive and even: %d\n", n, isPositiveAndEven);

    return 0;
}
