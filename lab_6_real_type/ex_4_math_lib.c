#include <stdio.h>
// подключение библиотеки math
#include <math.h>

// math - часть стандартной библиотеки C, предоставляющая набор математических функций
// функции с суффиксом "f" предназначены для работы с числами типа float
// остальные в основном для double

int main () {
    // квадратный корень
    printf("sqrt(16.0) = %f\n", sqrt(16.0));

    // возведение в степень
    printf("pow(2.8, 9.1) = %f\n", pow(2.8, 9.1)); // поддержка возведения в вещественную степень, сложная для вычислений

    // логарифм  
    printf("log(5.0) = %f\n", log(5.0)); // натуральный
    printf("log10(23.0) = %f\n", log10(23.0)); // по основанию 10

    // округление до
    printf("floor(2.56) = %f\n", floor(2.56)); // меньшего целого
    printf("ceil(2.56) = %f\n", ceil(2.56)); // ближайшего целого

    // тригонометрические функции 
    printf("sin(0.0) = %f\n", sin(0.0));
    printf("cos(0.0) = %f\n", cos(0.0));
    printf("tan(0.0) = %f\n", tan(0.0));

    // и им обратные
    printf("acos(0.0) = %f\n", acos(0.0));
    printf("asin(0.0) = %f\n", asin(0.0));
    printf("atan(0.0) = %f\n", atan(0.0));
    return 0;
}
