#include <stdio.h>

int main(void) {
    double num1, num2;
    double sum, product;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;
    product = num1 * num2;

    printf("\n--- Results ---\n");
    printf("Addition: %.2lf + %.2lf = %.2lf\n", num1, num2, sum);
    printf("Multiplication: %.2lf * %.2lf = %.2lf\n", num1, num2, product);

    return 0;
}
