#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks[5];
};

int main() {
    struct Student s[3];
    int i, j;
    float total, avg;

    // Input details
    for(i = 0; i < 3; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks of 5 subjects:\n");
        for(j = 0; j < 5; j++) {
            scanf("%f", &s[i].marks[j]);
        }
    }

    // Calculate and display
    for(i = 0; i < 3; i++) {
        total = 0;

        for(j = 0; j < 5; j++) {
            total += s[i].marks[j];
        }

        avg = total / 5;

        printf("\nStudent %d Details:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Total Marks: %.2f\n", total);
        printf("Average Marks: %.2f\n", avg);
    }

    return 0;
}