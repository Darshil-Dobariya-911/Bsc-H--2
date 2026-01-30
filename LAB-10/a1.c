#include <stdio.h>

int main() {
    int n = 6;
    int arr[] = {1, 3, 2, 400, 100, 10};

    // Handle single element
    if (n == 1) {
        printf("peak element: %d", arr[0]);
        return 0;
    }

    // Check first element
    if (arr[0] >= arr[1]) {
        printf("peak element: %d", arr[0]);
        return 0;
    }

    // Check middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("peak element: %d", arr[i]);
            return 0;
        }
    }

    // Check last element
    if (arr[n - 1] >= arr[n - 2]) {
        printf("peak element: %d", arr[n - 1]);
        return 0;
    }

    return 0;
}
