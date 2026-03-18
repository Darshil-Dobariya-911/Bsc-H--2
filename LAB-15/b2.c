#include <stdio.h>

struct Date {
    int day, month, year;
};

// Function to check leap year
int isLeap(int year) {
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}

// Function to validate date
int isValid(struct Date d) {

    if(d.month < 1 || d.month > 12)
        return 0;

    if(d.day < 1)
        return 0;

    int days;

    switch(d.month) {
        case 2:
            if(isLeap(d.year))
                days = 29;
            else
                days = 28;
            break;

        case 4: case 6: case 9: case 11:
            days = 30;
            break;

        default:
            days = 31;
    }

    if(d.day > days)
        return 0;

    return 1;
}

int main() {
    struct Date d;

    printf("Enter day month year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);

    if(isValid(d))
        printf("Valid Date\n");
    else
        printf("Invalid Date\n");

    return 0;
}
