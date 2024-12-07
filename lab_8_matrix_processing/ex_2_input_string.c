#include <stdio.h>
#define BUFFER_SIZE 16

int main () {
    // как считать строку?
    char buffer[BUFFER_SIZE];

    // вариант 1: scanf("%s")
    // читает до пробельного символа
    // printf("Input string: ");
    // scanf("%s", buffer);
    // printf("String: %s\n", buffer);
    // небезопасно: нет проверки, предотвращающей выход за границы буфера
    
    // вариант 2: scanf("%15s")
    // scanf позволяет указать ширину поля - максимальное количество букв, которое может быть считано для этого поля
    // printf("Input string: ");
    // scanf("%15s", buffer);
    // printf("String: %s\n", buffer);

    // вариант 3: getchar - считывает одну букву из стандартного потока ввода
    printf("Input string: ");

    int length = 0;

    while (length < BUFFER_SIZE - 1) {
        char nextChar = getchar();
        if (nextChar == '\n') break; // считываем до ввода переноса строка

        buffer[length] = nextChar;
        length++;
    }
    
    buffer[length] = '\0';

    printf("String: %s\n", buffer);
    
    return 0;
}
