

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int is_multiple = (num % 3 == 0) || (num % 5 == 0);

    printf("Is %d a multiple of 3 or 5? %d\n", num, is_multiple);

    return 0;
}
