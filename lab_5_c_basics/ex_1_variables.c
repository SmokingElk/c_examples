#include <stdio.h>
// тип bool
#include <stdbool.h>

int main () {
    // переменные объявляются 
    // TypeName VariableName;
    // ; - конец выражения
    // имя - последовательность латинских букв, знака _ или цифр (но с цифры имя начинаться не может)
    
    // пример объявление целочисленной переменной с именем "x"
    int x;

    // примитивные типы
    short smallIntegerNumber; // маленькое целое число [-32768; 32767]
    int integerNumber; // целое число [-2147483648; 2147483647]
    long int bigIntegerNumber; // большое целое число [-2147483648; 2147483647]
    long long int largeIntegerNumber; // целое число еще больше [-9223372036854775808; 9223372036854775807]

    unsigned short unsignedSmallIntegerNumber; // беззнаковое маленькое целое число [0; 65535]
    unsigned int unsignedIntegerNumber; // беззнаковое целое число [0; 4294967295]
    unsigned long int unsignedBigIntegerNumber; // беззнаковое большое целое число [0; 4294967295]
    unsigned long long int unsignedLargeIntegerNumber; // беззнаковое целое число еще больше [0; 18446744073709551615]

    float floatNumber; // "вещественное" число (с плавающим порядком)
    double doubleNumber; // "вещественное" число двойной точности

    char letter; // литерный тип

    bool booleanVariable; // булево значение (истина ложь)

    // переменные одного типа могут быть объявлены перечислением через ','
    int a, b, c;

    return 0;
}
