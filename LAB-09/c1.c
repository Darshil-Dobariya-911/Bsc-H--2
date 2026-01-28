// 1.  We have two arrays A and B each of 10 integers. Write a program that tests if every element of array A is 
// equal to corresponding element in array B. In other words, program must check if A [0] is equal to B [0] 
// and so on... The program prints 1 if all elements are equal and prints 0 if at least one element is not equal.

#include <stdio.h>

int main() {
    int A[10], B[10];
    int i, equal = 1;  

    // Input for array A
    printf("Enter 10 elements of array A:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    // Input for array B
    printf("Enter 10 elements of array B:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }

    // Compare both arrays
    for (i = 0; i < 10; i++) {
        if (A[i] != B[i]) {
            equal = 0;   // Found mismatch
            break;       // No need to check further
        }
    }

    // Print result
    printf("%d\n", equal);

    return 0;
}
