#include <stdio.h>

int main(void)
{
    int r;
    float area, perimeter;

    printf("The Radius of circle is: ");
    scanf("%d", &r);

    area = 3.14159f * r * r;
    perimeter = 2 * 3.14159f * r;

    printf("The AREA of circle is: %f\n", area);
    printf("The PERIMETER of circle is: %f\n", perimeter);

    return 0;
}
