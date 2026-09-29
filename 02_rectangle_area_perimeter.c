#include <stdio.h>

int main(void)
{
    int length, breadth, area, perimeter;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breadth: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("The area is %d\n", area);
    printf("The perimeter is %d\n", perimeter);

    return 0;
}
