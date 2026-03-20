#include <stdio.h>

struct Student {
    char name[50];
    int id;
    float grade;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter Name, ID, Grade: ");
        scanf("%s %d %f", s.name, &s.id, &s.grade);

        fprintf(fp, "%s %d %.2f\n", s.name, s.id, s.grade);
    }

    fclose(fp);

    printf("Records stored successfully in text format!");
    return 0;
}