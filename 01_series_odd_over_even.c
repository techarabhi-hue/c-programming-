#include <stdio.h>

int main(void) {
    int n;
    double sum = 1.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Sum is 0\n");
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        double numerator = 2 * i - 1;
        double denominator = 2 * i - 2;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms is: %lf\n", n, sum);
    return 0;
}
