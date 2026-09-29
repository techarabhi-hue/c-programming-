#include <stdio.h>
int main(void) {
    int r, c, a[10][10];
    printf("Enter rows and columns: "); scanf("%d%d", &r, &c);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    printf("Diagonal traversal: ");
    for (int d = 0; d < r + c - 1; d++) {
        for (int i = 0; i < r; i++) {
            int j = d - i;
            if (j >= 0 && j < c) printf("%d ", a[i][j]);
        }
    }
    printf("\n"); return 0;
}
