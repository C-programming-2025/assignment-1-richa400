

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int condition = (a == b) && (b != c);
    printf("Condition (a==b && b!=c) is: %d\n", condition);

    return 0;
}
