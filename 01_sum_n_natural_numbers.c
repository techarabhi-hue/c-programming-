#include <stdio.h>

int main(void) {
    int n, sum;

    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}
