#include <stdio.h>
int main(void) {
    int num, temp, firstDigit, lastDigit, divisor = 1;
    printf("Enter an integer: "); scanf("%d", &num);
    if (num >= -9 && num <= 9) { printf("Number after swapping first and last digit: %d\n", num); return 0; }
    temp = num < 0 ? -num : num;
    lastDigit = temp % 10;
    while (temp >= 10) { temp /= 10; divisor *= 10; }
    firstDigit = temp;
    int absNum = num < 0 ? -num : num;
    int swapped = absNum - firstDigit * divisor - lastDigit + lastDigit * divisor + firstDigit;
    if (num < 0) swapped = -swapped;
    printf("Original number: %d\n", num);
    printf("Number after swapping first and last digit: %d\n", swapped);
    return 0;
}
