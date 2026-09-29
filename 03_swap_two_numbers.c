#include <stdio.h>

int main(void)
{
    int a, b;

    printf("THE FIRST NUMBER IS:");
    scanf("%d", &a);

    printf("THE SECOND NUMBER IS:");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}
