#include <stdio.h>
int main(void) {
    int r, c, a[10][10], rowSum[10] = {0};
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    for (int i = 0; i < r; i++) printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    return 0;
}
