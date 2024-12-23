#include <stdio.h>

int main () {
    int x = 0;

    x + 2; // сложение
    x - 3; // вычитание
    x * 5; // умножение
    x / 6; // целочисленное деление

    double y = 2.7;
    y / 4.8; // деление
    // обратите внимание: целочисленное деление и деление - разные операции, несмотря на то, 
    // что имеют одинаковое обозначение

    x % 3; // остаток от деления

    // операторы, комбинированные с присваиванием
    x += 2; // x = x + 2
    x -= 2;
    x *= 5;
    x /= 6;
    x %= 3;

    // операторы левого инкремента и декремента
    // возвращаемое значение - увеличенное на 1
    ++x;
    --x;

    // операторы правого инкремента и декремента
    // возвращаемое значение - значение ДО изменения
    x++;
    x--;

    // пример
    int a = 0, b;

    b = ++a; // a = 1, b = 1
    b = a++; // a = 2, b = 1

    return 0;
}
