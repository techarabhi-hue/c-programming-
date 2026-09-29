#include <stdio.h>
int main(void) {
    int n, a[10][10], sum = 0;
    printf("Enter order of square matrix: "); scanf("%d", &n);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++) sum += a[i][i];
    printf("Sum of main diagonal elements = %d\n", sum); return 0;
}
