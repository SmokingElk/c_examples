#include <stdio.h>

int main () {
    int x = 10;
    // операции с указателями: 
    // присваивание
    int *px = &x;

    int *pInt;
    pInt = px;

    // разыменование
    printf("x is %d, *px is %d, *pInt is %d\n", x, *px, *pInt);

    // доступ к значению идет и на чтение и на запись (разыменование возвращает lvalue)
    *px = 11;
    printf("x is %d, *px is %d, *pInt is %d\n", x, *px, *pInt);

    *pInt = 12;
    printf("x is %d, *px is %d, *pInt is %d\n", x, *px, *pInt);

    // это все одно значение
    x = 13;
    printf("x is %d, *px is %d, *pInt is %d\n", x, *px, *pInt);

    // арифметика указателей
    // НЕ ПИСАТЬ ТАК (код исключительный демонстративный, писать так в реальной программе не безопасно)
    int letterA = 97;
    int letterB = 98;
    int letterC = 99;
    int letterD = 100;

    int *pB = &letterB;
    int *pA = pB + 1; // адреса отличаются на 4, хотя мы сделали + 1, на самом деле, для типа T* смещение идет на n * sizeof(T)
    int *pD = pA - 3;

    printf("PA: %p\n", &letterA);
    printf("PB: %p\n", &letterB);
    printf("PC: %p\n", &letterC);
    printf("PD: %p\n", &letterD);
    printf("%d %d %d %d\n", *pA, *pB, *(pB - 1), *pD);

    return 0;
}
