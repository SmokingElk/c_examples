#include <stdio.h>

// глобальные переменные объявляются вне тела какой-либо функции (обычно в начале)
int globalNumber = 3;

// глобальными также могут быть константы
// в таким виде удобно описывать конфигурацию проекта
const double PI = 3.14;
const double G = 9.8;

// могут быть выражения, зависящие от констант и не содержащие вызовов функций
double gobalExpr = 2.0 * PI;

// глобальные переменные доступны для чтения/изменения из любой части программы
void printGlobalNumber () {
    printf("%d\n", globalNumber);
}

void setGlobalNumber (int value) {
    globalNumber = value;
}

int main () {
    printGlobalNumber();
    setGlobalNumber(4);
    printGlobalNumber();

    // отсюда тоже есть доступ
    globalNumber = 5;
    printf("%d\n", globalNumber);

    // хорошее место для использования глобальных переменных - нигде)
    // глобальные константы - можно для конфигурации проекта
    
    return 0;
}
