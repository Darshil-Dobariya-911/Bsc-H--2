#include <stdio.h>
#include <string.h>

// Function to return value of Roman symbol
int value(char r) {
    if (r == 'I') return 1;
    if (r == 'V') return 5;
    if (r == 'X') return 10;
    if (r == 'L') return 50;
    if (r == 'C') return 100;
    if (r == 'D') return 500;
    if (r == 'M') return 1000;
    return -1;
}

// Function to convert Roman numeral to Integer
int romanToInt(char str[]) {
    int total = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        int current = value(str[i]);

        if (i + 1 < len) {
            int next = value(str[i + 1]);

            // If next value is greater, subtract current
            if (current < next) {
                total += (next - current);
                i++;  // Skip next character
            } else {
                total += current;
            }
        } else {
            total += current;
        }
    }
    return total;
}

int main() {
    char roman[100];

    printf("Enter Roman Numeral: ");
    scanf("%s", roman);

    int result = romanToInt(roman);

    if (result == -1)
        printf("Invalid Roman Numeral\n");
    else
        printf("Integer value: %d\n", result);

    return 0;
}