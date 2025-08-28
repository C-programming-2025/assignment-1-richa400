

#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    int temp = x;
    x = y;
    y = z;
    z = temp;
    printf("After cyclic swap: x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}
