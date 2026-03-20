#include <stdio.h>

int main() {
    FILE *fp;
    char word[100];
    int count = 0;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Read words directly
    while (fscanf(fp, "%99s", word) == 1) {
        count++;
    }

    // 1 → successfully read a word ✅
    // EOF → end of file ❌
    // 0 → read failed ❌

    fclose(fp);

    printf("Total words = %d", count);
    return 0;
}
