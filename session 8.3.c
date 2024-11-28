#include <stdio.h>

int main() {
    int n;

    printf("nhap vao mang so nguyen vuong: ");
    scanf("%d", &n);

    int max[n][n];

    int value = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            max[i][j] = value++;
        }
    }

    printf("mang vuong %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", max[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}
