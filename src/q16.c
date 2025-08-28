// Given two variables x and y, write an expression that calculates the average of their values.

#include <stdio.h>

int main() {
    double x, y;
    printf("Enter the first number: ");
    scanf("%lf", &x);
    printf("Enter the second number: ");
    scanf("%lf", &y);
    printf("The average of %.2lf and %.2lf is %.2lf\n", x, y, (x + y) / 2);

    return 0;
}
