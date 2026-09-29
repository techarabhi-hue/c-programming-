#include <stdio.h>

int main(void)
{
    float c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9.0f / 5.0f) + 32.0f;

    printf("%.2f C is equal to %.2f F\n", c, f);

    return 0;
}
