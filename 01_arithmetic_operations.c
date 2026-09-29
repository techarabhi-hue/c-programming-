#include <stdio.h>

int main(void)
{
    int a, b, sum, difference, product, quotient;

    printf("Enter 1st no.: ");
    scanf("%d", &a);

    printf("Enter 2nd no.: ");
    scanf("%d", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;

    printf("The sum is: %d\n", sum);
    printf("The difference is: %d\n", difference);
    printf("The product is: %d\n", product);

    if (b != 0) {
        quotient = a / b;
        printf("The quotient is: %d\n", quotient);
    } else {
        printf("The quotient is undefined (division by zero).\n");
    }

    return 0;
}
