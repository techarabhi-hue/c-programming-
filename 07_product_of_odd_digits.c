#include <stdio.h>
int main(void) {
    int num, temp, remainder, product = 1, hasOdd = 0;
    printf("Enter an integer: "); scanf("%d", &num);
    temp = num; if (temp < 0) temp = -temp;
    while (temp != 0) { remainder = temp % 10; if (remainder % 2 != 0) { product *= remainder; hasOdd = 1; } temp /= 10; }
    if (hasOdd) printf("Product of odd digits of %d is: %d\n", num, product);
    else printf("There are no odd digits in %d.\n", num);
    return 0;
}
