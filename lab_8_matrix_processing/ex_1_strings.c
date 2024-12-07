#include <stdio.h>

int main () {
    // строка - тип данных, представляющий последовательности букв с доступом по индексу
    // в c нет строк, есть массивы типа char

    char charBuffer[64]; // - строка

    // есть строковые литералы (можно использовать для инициализации) 
    char str[50] = "Hello, World!";

    printf("%s\n", str);

    // если длина массива не хранится нигде в программе
    // откуда printf знает, где кончается строка?
    // да и размер буфера не совпадает с длиной строки

    // '\0' - терминальный символ, все строки снабжаются им для определения конца
    printf("str[13] = %d\n", (int)str[13]);

    // если поставить '\0' в середину строки, эта позиция станет концом:
    str[5] = '\0';
    printf("%s\n", str);

    // для строк также доступен авто подсчет длины массива
    char str2[] = "some string";
    return 0;
}
