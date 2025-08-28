

#include <stdio.h>

int main() {
    int a, b, c;
    int result;
    printf("Enter value a: ");
    scanf("%d", &a);
    printf("Enter value b: ");
    scanf("%d", &b);
    printf("Enter value c: ");
    scanf("%d", &c);
    result = (a > b) && (c != 0);
    printf("%d\n", result);
    return 0;
}
