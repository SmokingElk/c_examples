#include <stdio.h>

// не работает, происходит передача по значению (меняются значения копий)
void naiveSwap (int lhv, int rhv) {
    int tmp = lhv;
    lhv = rhv;
    rhv = tmp;
}

// рабочая реализация
void swap (int *lhv, int *rhv) {
    int tmp = *lhv;
    *lhv = *rhv;
    *rhv = tmp;
}

// значения указателей (адреса) также передаются по значению (копируются)
void naiveSetPointer (int *ptr1, int *ptr2) {
    ptr1 = ptr2;
}

// int **pptr1 - указатель на значение типа указатель на int.
void setPointer (int **pptr1, int *ptr2) {
    *pptr1 = ptr2;
}

// возврат нескольких значений из функции
int div (int number, int divider, int * const remainder) {
    int res = 0;
    
    while (number > divider) {
        number -= divider;
        res++;
    }

    *remainder = number;
    return res;
}

int main () {
    // любая передача значения в подпрограмму в C происходит по значению (создается копия)  
    // передача по указателю - техника, при которой вместо передачи самого значения в функцию
    // в нее передается указатель на это значение, по которому значение можно изменить
    int a = 2; int b = 3;
    printf("a = %d, b = %d\n", a, b);

    naiveSwap(a, b);
    printf("a = %d, b = %d\n", a, b);

    int *pa = &a;
    int *pb = &b;

    swap(pa, pb);
    printf("a = %d, b = %d\n", a, b);

    printf("pa: %p\n", pa);
    
    naiveSetPointer(pa, pb);      
    printf("pa: %p\n", pa);

    setPointer(&pa, pb);
    printf("pa: %p, pb: %p\n", pa, pb);

    int remainder;
    int *premainder = &remainder;
    int ratio = div(13, 3, premainder);

    printf("Ratio: %d, remainder: %d\n", ratio, remainder);

    return 0;
}
