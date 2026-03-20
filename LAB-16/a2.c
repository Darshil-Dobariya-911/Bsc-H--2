#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    char str[100];

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    //  while (fgets(str, sizeof(str), fp) != NULL) {
    //     printf("%s", str);
    // }

    // while (fscanf(fp, "%s", str) != EOF) {
    //     printf("%s ", str);
    // }

    fclose(fp);

    return 0;
}