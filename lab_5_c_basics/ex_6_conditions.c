#include <stdio.h>
#include <stdbool.h>

int main () {
    // оператор ветвления
    // if (condition) body

    // condition - выражение, значение которого будет проинтерпретировано, как логическое
    // если значение интерпретируется как истинна - будет выполнено выражение body
    // в противном случае - выполнение продолжится с выражения, следующего за body
    
    // Примеры:

    int x = 5, y = 7;
    
    if (x < y) printf("x is less than y\n");
    
    if (x == y) printf("x is equal to y\n");

    bool condition = x <= y;
    if (condition) printf("Condition is true\n");
    if (x) printf("Value of x has been considered as true\n");

    // оператор двузвенного ветвления
    // одно из звеньев выполнится всегда

    if (x >= y) printf("x is more or equals to y\n");
    else printf("x is less than y\n");
    
    // оператор многозвенного ветвления
    if (x > y) printf("x is more than y\n");
    else if (x < y) printf("x is less than y\n");
    else printf("x is equal to y");
    
    // звеньев с предикатом может быть сколь угодно много
    // заключительный else можно опустить

    return 0;
}
