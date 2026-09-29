#include <stdio.h>
int main(void) {
    int n, a[10][10], distinct = 1;
    printf("Enter order of square matrix: "); scanf("%d", &n);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++) for (int j = i + 1; j < n; j++) if (a[i][i] == a[j][j]) distinct = 0;
    if (distinct) printf("Diagonal elements are distinct.\n"); else printf("Diagonal elements are not distinct.\n");
    return 0;
}
