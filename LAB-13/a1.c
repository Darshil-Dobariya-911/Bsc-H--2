#include <stdio.h>
#include <string.h>

int main() {
    char num[1000];
    
    printf("Enter large number: ");
    scanf("%s", num);

    int len = strlen(num);
    int carry = 1;   // because we are adding 1

    // Start from last digit
    for (int i = len - 1; i >= 0; i--) {
        int digit = num[i] - '0';
        digit += carry;

        if (digit == 10) {
            num[i] = '0';
            carry = 1;
        } else {
            num[i] = digit + '0';
            carry = 0;
            break;  // stop if no carry
        }
    }

    // If carry is still 1, we need extra digit
    if (carry == 1) {
        printf("1%s\n", num);
    } else {
        printf("%s\n", num);
    }

    return 0;
}
