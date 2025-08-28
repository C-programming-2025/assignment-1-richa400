#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d\n", (num % 3 == 0) || (num % 5 == 0));

    return 0;
}
