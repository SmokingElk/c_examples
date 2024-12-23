#include <stdio.h>

int main () {
    int x = 10, y = 11;

    printf("Value of x is %d\n", x);

    // оператор & ставит значению в соответствие адрес (если быть точнее - указатель) в памяти, по которому оно расположено
    printf("Addr of %d is %p\n", x, &x);

    // можно прикинуть, как данные расположены в памяти 
    printf("Addr of value of y is %p\n", &y);

    // вычисление адреса возможно для lvalue значений (значений, для которых определена идентифицируемая область в памяти)
    // &x - OK
    // &5 - ошибка
    return 0;
}
