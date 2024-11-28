#include <stdio.h>

int main() {

    int arr[3][4] = {
        {10, 20, 30, 40},
        {5, 15, 25, 35},
        {1, 50, 45, 60}
    };
    int rows = 3; 
    int cols = 4; 

    int max = arr[0][0]; 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j]; 
            }
        }
    }

    printf("phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}
