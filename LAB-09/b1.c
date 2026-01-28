// FAIL: Marks less than 40.

// PASS: Marks between 40 and 49.

// FIRST CLASS: Marks between 50 and 74.

// DISTINCTION: Marks 75 and above.

#include <stdio.h>

int main() {
    int marks[5]; 
    int fail = 0, pass = 0, firstClass = 0, distinction = 0;  
    
    
    printf("Enter the marks of 20 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    
    for (int i = 0; i < 5; i++) {
        if (marks[i] >= 75) {
            distinction++;  // Fail category
        } else if (marks[i] >= 50) {
            firstClass++;  // Pass category
        } else if (marks[i] >= 40) {
            pass++;  // First class category
        } else {
            fail++;  // Distinction category
        }
    }

    // Printing the number of students in each category
    printf("\nNumber of students in each category:\n");
    printf("FAIL: %d\n", fail);
    printf("PASS: %d\n", pass);
    printf("FIRST CLASS: %d\n", firstClass);
    printf("DISTINCTION: %d\n", distinction);

    return 0;
}
