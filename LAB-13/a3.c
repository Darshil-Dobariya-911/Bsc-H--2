#include <stdio.h>
#include <string.h>

#define MAX 100

// Function to find longest common prefix
void longestCommonPrefix(char strs[][MAX], int n, char result[]) {
    if (n == 0) {
        result[0] = '\0';
        return;
    }

    // Take first string as reference
    strcpy(result, strs[0]);

    for (int i = 1; i < n; i++) {
        int j = 0;

        // Compare result with current string
        while (result[j] && strs[i][j] && result[j] == strs[i][j]) {
            j++;
        }

        result[j] = '\0';  // Cut off at mismatch

        // If no common prefix
        if (result[0] == '\0')
            return;
    }
}

int main() {
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    char strs[n][MAX];
    char result[MAX];

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", strs[i]);
    }

    longestCommonPrefix(strs, n, result);

    printf("Longest Common Prefix: \"%s\"\n", result);

    return 0;
}