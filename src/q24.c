#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Expression: 1 if n is a perfect square, 0 otherwise
    printf("%d\n", (sqrt(n) == (int)sqrt(n)));

    return 0;
}

