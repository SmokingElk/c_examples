#include <stdio.h>

int main () {
    // константы - слова, значение которых не меняется
    // const ConstType ConstName = ConstValue;

    // пример
    const double PI = 3.14;

    double radius = 5.5;
    double area = PI * radius * radius; // OK
    // PI = 2.0; PI += 1.0; - ошибка

    // Обратите внимание
    // const int x; - ошибка: значение для константы не определено
    
    // но значение константы может быть вычисленно в момент определения
    const double curveLength = 2 * PI * radius;

    return 0;
}
