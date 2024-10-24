#include <stdio.h>
#include <stdbool.h>

int main () {
    int x = 2, y = 3;

    x == y; // значения равны
    x != y; // значения не равны
    x < y; // меньше
    x <= y; // меньше или равно
    x > y; // больше
    x >= y; // больше или равно

    bool a = true, b = false;
    
    a && b; // конъюнкция 
    a || b; // дизъюнкция
    !a; // отрицание

    return 0;
}
