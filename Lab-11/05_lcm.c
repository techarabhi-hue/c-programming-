#include <stdio.h>
int main(void) {
    int n1, n2, a, b, temp, hcf, lcm;
    printf("Enter two integers: "); scanf("%d %d", &n1, &n2);
    a = n1; b = n2;
    while (b != 0) { temp = b; b = a % b; a = temp; }
    hcf = a; lcm = (n1 * n2) / hcf;
    printf("LCM of %d and %d is: %d\n", n1, n2, lcm);
    return 0;
}
