#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d\n", (n % 3 == 0) || (n % 5 == 0));
    return 0;
}
