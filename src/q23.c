

#include <stdio.h>

int main() {
    int num;
    int check;

    printf("Enter a number: ");
    scanf("%d", &num);
    check = (num > 0) && ((num & (num - 1)) == 0);

    printf("%d\n", check);

    return 0;
}
