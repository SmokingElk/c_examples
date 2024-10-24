#include <stdio.h>

// функции - подпрограммы, для которых явно предполагается возврат значения
// ReturnValue ProcedureName (Param1Type Param1Name, Param2Type Param2Name...) {
//  // тело
// }

// процедуры объявляются тут
int factorial (int x) {
    if (x < 0) return -1;

    int fact = 1;
    for (int i = 2; i < x; i++) fact *= i;
    return fact;
}

double calculator (double x, double y, char op) {
    if (op == '+') return x + y;
    // обратите внимание, else не требуется: выполнение тела прерывается после выполнения return
    if (op == '-') return x - y;
    if (op == '*') return x * y;
    if (op == '/' && y != 0.0) return x / y;
    return x;
}

// main - тоже функция
// возвращаемое значение - exit code
int main () {
    int x = 5;
    int factX = factorial(x);
    printf("Factorial of x is %d\n", factX);

    // композиция функций во время вызова
    printf("%f\n", calculator(2.0, calculator(5.0, 3.0, '*'), '+'));
    
    return 0;
}
