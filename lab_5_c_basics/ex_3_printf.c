#include <stdio.h>

int main () {
    // printf - функция стандартной библиотеки, выполняющая вывод строкового шаблона в стандартный поток вывода
    // printf(template [, ...values])
    
    // примеры

    // 1. вывод строки (последовательность литер)
    printf("Hello world!\n"); // '\n' - управляющий символ, перенос строки

    // 2. вывод целого числа
    int x = 5;
    printf("%d\n", x);

    // 3. вывод вещественного числа
    double y = 7.3;
    printf("Value of y is %f\n", y); // подстановка может комбинироваться с другими литерами в шаблоне

    // 4. вывод нескольких значений
    printf("X = %d, Y = %f\n", x, y); // подстановок может быть несколько (важен порядок)
    
    // 5. вывод литеры
    char letter = 'a';
    printf("Value of letter is '%c'\n");

    // 6. экранирование
    printf("Type of y is \"real\"\n");
    printf("\\users\\docs\\ \n");

    // 7. табуляция
    printf("\tthis text is tabulated\n");

    return 0;
}
