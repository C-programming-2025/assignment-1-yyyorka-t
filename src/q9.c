#include <stdio.h>

int main() {
    int days, weeks, remaining_days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    weeks = days / 7;
    remaining_days = days % 7;
    printf("%d week and %d days\n", weeks, remaining_days);

    return 0;
}