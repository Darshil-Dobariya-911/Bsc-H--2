#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    printf("Enter a string: ");
    gets(str);   // (for beginners, but fgets is safer)

    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    fprintf(fp, "%s", str);

    fclose(fp);
    printf("Data written to file successfully!");

    return 0;
}