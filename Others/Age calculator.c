#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int birth_year, birth_month, birth_day;
    int current_year, current_month, current_day;
    int age_years, age_months, age_days;

    printf("Enter your birth date (YYYY-MM-DD): ");
    scanf("%d-%d-%d", &birth_year, &birth_month, &birth_day);

    time_t now = time(NULL);
    struct tm *current_time = localtime(&now);

    current_year = current_time->tm_year + 1900;
    current_month = current_time->tm_mon + 1;
    current_day = current_time->tm_mday;

    age_years = current_year - birth_year;
    age_months = current_month - birth_month;
    age_days = current_day - birth_day;

    if (age_days < 0) {
        age_days += 30;
        age_months--;
    }
    if (age_months < 0) {
        age_months += 12;
        age_years--;
    }

    printf("Your age is %d years, %d months, and %d days.\n", age_years, age_months, age_days);

    return 0;
}
