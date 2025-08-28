

#include <stdio.h>

int main() {
    int n;
    int divisible;
 
    printf("Enter a number: ");
    scanf("%d", &n);
    divisible = (n / 2 * 2 == n) && (n / 3 * 3 == n);
    printf("The number %d is divisible by both 2 and 3: %d\n", n, divisible);
    return 0;
}
