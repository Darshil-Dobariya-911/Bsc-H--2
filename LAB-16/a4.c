#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[200], word[50];
    int lineNumber = 0, found = 0;

    printf("Enter word to search: ");
    scanf("%s", word);

    fp = fopen("text.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        lineNumber++;

        if (strstr(line, word) != NULL) {
            printf("Word found at line %d\n", lineNumber);
            found = 1;
        }
    }

    if (!found) {
        printf("Word not found in file.");
    }

    fclose(fp);

    return 0;
}

// strstr(main_string, sub_string);