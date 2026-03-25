#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, i;
    char *str;

    printf("Enter length of string: ");
    scanf("%d", &n);

    str = (char *)malloc((n + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    printf("Original string: %s\n", str);

    // Reverse string
    for(i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    free(str);

    return 0;
}