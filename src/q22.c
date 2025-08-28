

#include <stdio.h>
#include<math.h>

int main() {
    double a, b;
    printf("Enter two numbers: ");  
    scanf("%lf %lf", &a, &b);

    double sum = a + b;

    int x = (int) sqrt(sum);

    printf("Rounded square root of the sum = %d\n", x);
    return 0;
}

