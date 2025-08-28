// Create an expression that checks if a given character is an uppercase letter.

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    int is_upper = (ch - 'A') >= 0 && (ch - 'Z') <= 0;
    printf("Is '%c' uppercase? %d\n", ch, is_upper);

    return 0;
}

