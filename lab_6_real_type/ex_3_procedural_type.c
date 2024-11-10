#include <stdio.h>

// процедурный тип - семейство типов, значения каждого из которых образуют множества подпрограмм с одинаковой сигнатурой
// операции: 
// 1. присваивание
// 2. вызов

// сигнатура - часть объявления функции/процедуры, определяющая тип возвращаемого значения и типы набора аргументов 
// например
int add (int a, int b) {
    return a + b;
}

// сигнатура этой функции - int (int, int)
// у следующей функции сигнатура такая же, однако имя функции и параметров, а также тело - отличаются
int sub (int lhv, int rhv) {
    return lhv - rhv;
}

// параметр функции может иметь процедурный тип
// doArithmetic - функция высшего порядка
int doArithmetic (int lhv, int rhv, int (*binaryOperator)(int, int)) {
    printf("Operand 1: %d\n", lhv);
    printf("Operand 2: %d\n", rhv);
    
    int result = binaryOperator(lhv, rhv);
    printf("Result: %d\n", result);

    return result;
}

double square (double x) {
    return x * x;
}

double cube (double x) {
    return x * x * x;
}

int main () {
    // объявление переменной процедурного типа
    double (*function)(double); // здесь имя переменной - function

    function = square; // операция присваивания
    int sum = function(2.0); // операция вызова

    function = cube;
    int difference = function(2.0);

    printf("%d %d\n", sum, difference);

    // пример передачи значения для параметра процедурного типа
    doArithmetic(18, 11, sub);
    return 0;
}
