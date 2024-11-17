#include <stdio.h>

#define SIZE 5

// способ #1
void printArray (int arr[], int n) {
    // sizeof(arr) тут не сработает (размер вычисляется на этапе компиляции)
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

// способ #2
// обратите внимание на использование const
void map (int * const arrayDst, const int * const arraySrc, int n, int (*lambda)(int)) {
    for (int i = 0; i < n; i++) arrayDst[i] = lambda(arraySrc[i]);
}

int square (int x) { return x * x; }

int main () {
    int array1[SIZE] = {1, 2, 3, 4, 5};
    int array2[SIZE];

    printArray(array1, SIZE);
    map(array2, array1, SIZE, square);
    printArray(array2, SIZE);
    
    return 0;
}
