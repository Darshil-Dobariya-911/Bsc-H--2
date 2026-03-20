#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    printf("Enter string to append: ");
    gets(str);

    fp = fopen("log.txt", "a");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    fprintf(fp, "%s\n", str);

    fclose(fp);

    printf("Data appended successfully!");

    return 0;
}