

#include <stdio.h>  

int main() {
    int x, result;
    printf("Enter a number: ");
    scanf("%d", &x);
    result = (++x * 3) - 10;
    printf("After incrementing by 1, multiplying by 3, and subtracting 10: %d\n", result);

    return 0;
}
