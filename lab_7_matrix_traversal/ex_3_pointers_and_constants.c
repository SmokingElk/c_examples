#include <stdio.h>

int main () {
    const double PI = 3.14;

    // получили доступ к изменению константы - плохо
    // double *ptrPI = &PI;
    // *ptrPI = 4;
    // printf("%f\n", PI);

    // указатель на константу
    const double *constDoublePtr = &PI;
    
    // изменять значение по указателю на константу запрещено
    // *constDoublePtr = 4; - ошибка
    printf("PI: %f\n", *constDoublePtr); // чтение разрешено

    double someDouble = 18.7;
    constDoublePtr = &someDouble;
    // само значение указателя изменять можно (в том числе на адрес не константного значения)
    printf("Some double: %f\n", *constDoublePtr);
    // *constDoublePtr = 3.0; - запись все еще запрещена

    // а что если мы хотим сделать константный указатель
    int x = 10;
    int y = 20;
    int * const ptrXConst = &x;

    // разрешено чтение и изменение значения по указателю
    *ptrXConst = 15;
    printf("X is %d\n", *ptrXConst);

    // но менять значение указателя нельзя
    // ptrXConst = &y; - ошибка

    // константный указатель на константу
    const double * const constPIPtrConst = &PI;

    // можно только читать значение по указателю
    // менять значение по указателю и значение указателя нельзя

    return 0;
}
