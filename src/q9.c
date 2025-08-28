// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"

#include <stdio.h>

int main() {
    int days, weeks, remaining_days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    weeks = days / 7;
    remaining_days = days % 7;
    printf("%d week(s) and %d day(s)\n", weeks, remaining_days);

    return 0;
}
