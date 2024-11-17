#include <stdio.h>

// перед компиляцией это заменится на 10
#define SIZE 10

int main () {
    // массив - регулярный структурный тип с индексированным (по номерам) доступом к элементам
    // с точки зрения памяти элементы массива хранятся друг за другом непрерывно
    // тип данных "массив" в C полноценно не поддерживается, но некоторые возможности предоставляются
    
    // объявление "массива" на 5 элементов типа int
    int array[5]; 

    // другие варианты объявления
    int array2[3] = {1, 2, 3}; // через список значений
    double array3[] = {99.0, -2.5, 8.3, 7.01}; // если указан список - можно опустить количество элементов в квадратных скобках
    char array4[SIZE]; // можно создать от значения макро-константы (элементов 10)
    // создавать от значения переменной НЕЛЬЗЯ (C позволяет, но это крайне не рекомендуется)

    // тип данных массив реализован как константный указатель на первый его элемент + выделение требуемой области в памяти
    // по выходу из блока эта память высвобождается
    // изначально размер массива НИГДЕ не хранится в программе, но можно посчитать так
    printf("array size: %d\n", sizeof(array) / sizeof(int));

    // однако это работает только если тип array - массив 

    // доступ к элементам
    printf("array2[0] is %d\n", array2[0]);
    printf("array2[1] is %d\n", array2[1]);
    printf("array2[2] is %d\n", array2[2]);

    // запись также доступна
    array2[0] = 5;
    printf("array2[0] is %d\n", array2[0]);
    
    // тип массив фактически действительно является указателем:
    int *pInt = array2;
    printf("*pInt = %d, *array2 = %d\n", *pInt, *array2);

    // более того: работает тот же синтаксис
    printf("array2[0] is %d, array2[1] is %d\n", pInt[0], pInt[1]);

    // дело в том, что [] - синтаксический сахар, на самом деле
    // array2[i] <=> *(array2 + i)
    
    // перебор массива через цикл - классический алгоритм
    for (int i = 0; i < sizeof(array3) / sizeof(double); i++) {
        printf("array3[%d] = %f\n", i, array3[i]);
    }

    // присвоить один массив другому нельзя (указатель константный)
    int numbers1[3] = {1, 2, 3};
    int numbers2[3]; 
    
    // numbers2 = numbers1; - ошибка

    return 0;
}