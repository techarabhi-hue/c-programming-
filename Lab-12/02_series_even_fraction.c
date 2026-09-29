#include <stdio.h>

int main(void) {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        double numerator = 2 * i;
        double denominator = 4 * i - 1;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms is: %lf\n", n, sum);
    return 0;
}
