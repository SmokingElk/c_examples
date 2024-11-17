#include <stdio.h>

#define SIZE 3

// размеры должны быть указаны
int printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matrix[i][j]);
        }
        
        printf("\n");
    }
}

int main () {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    printMatrix(matrix);

    return 0;
}
