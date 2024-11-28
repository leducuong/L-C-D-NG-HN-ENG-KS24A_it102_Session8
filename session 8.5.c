#include <stdio.h>

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int hang = 4; 
    int cot = 4; 
    int sum = 0;
    for (int j = 0; j < cot; j++) {
        sum += arr[0][j];
    }
    for (int j = 0; j < cot; j++) {
        sum += arr[hang - 1][j];
    }

    for (int i = 1; i < hang - 1; i++) {
        sum += arr[i][0];       
        sum += arr[i][cot - 1]; 
    }

    printf("tong cac phan tu trong mang la : %d\n", sum);

    return 0;
}
