#include <stdio.h>
#include <string.h>
int main(void) {
    char binary[100];
    printf("Enter a binary number (using 1s and 0s): "); scanf("%99s", binary);
    printf("1's complement: ");
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') putchar('1');
        else if (binary[i] == '1') putchar('0');
        else { printf("\nInvalid binary number.\n"); return 0; }
    }
    putchar('\n'); return 0;
}
