// Create an expression that checks if a given number is a perfect square.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = (n == 0*0) || (n == 1*1) || (n == 2*2) || (n == 3*3) ||
                 (n == 4*4) || (n == 5*5) || (n == 6*6) || (n == 7*7) ||
                 (n == 8*8) || (n == 9*9) || (n == 10*10) || (n == 11*11) ||
                 (n == 12*12) || (n == 13*13) || (n == 14*14) || (n == 15*15) ||
                 (n == 16*16);
    printf("%d is %s perfect square.\n", n, "not a" + result * 4);

    return 0;
}
