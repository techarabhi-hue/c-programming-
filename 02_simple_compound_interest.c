#include <stdio.h>
#include <math.h>

int main(void) {
    float p, r, t, si, ci;

    printf("Principal amount is: ");
    scanf("%f", &p);

    printf("Rate of interest is: ");
    scanf("%f", &r);

    printf("For time period: ");
    scanf("%f", &t);

    si = p * r * t / 100;
    printf("The simple interest is: %f\n", si);

    ci = p * (pow(1 + r / 100, t) - 1);
    printf("The compound interest is: %f\n", ci);

    return 0;
}
