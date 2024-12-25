#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

void add_days(struct Date *date, int num_days) {
    // Number of days in each month
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Add the number of days
    date->day += num_days;

    // Adjust the month and year if necessary
    while (date->day > days_in_month[date->month]) {
        date->day -= days_in_month[date->month];
        date->month++;
        if (date->month > 12) {
            date->month = 1;
            date->year++;
        }
    }
}

int main() {
    struct Date current_date;
    printf("Enter current date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &current_date.day, &current_date.month, &current_date.year);

    add_days(&current_date, 45);

    printf("Final date: %02d/%02d/%04d\n", current_date.day, current_date.month, current_date.year);

    return 0;
}
