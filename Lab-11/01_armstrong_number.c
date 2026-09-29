#include <stdio.h>

int main(void) {
    int num, originalNum, temp, remainder, digits = 0, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    temp = num;
    while (temp != 0) { digits++; temp /= 10; }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) power *= remainder;
        sum += power;
        temp /= 10;
    }
    if (sum == originalNum) printf("%d is an Armstrong number.\n", originalNum);
    else printf("%d is not an Armstrong number.\n", originalNum);
    return 0;
}
