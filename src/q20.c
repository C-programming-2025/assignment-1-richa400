#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int multiple_of_3 = (num / 3) * 3 == num;
    int multiple_of_5 = (num / 5) * 5 == num;

    printf("%d\n", multiple_of_3 || multiple_of_5);

    return 0;
}
