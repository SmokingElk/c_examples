#include <stdio.h>

int main () {
    printf("Input value of x: ");
    int x;
    
    // scanf - функция стандартной библиотеки для чтения значений по шаблону из стандартного потока ввода
    // принимает указатели, по которым записывает считанные значения
    scanf("%d", &x);

    printf("Your input: %d\n", x);

    // считать несколько значений
    int number1, number2, letter;
    scanf("%d%d%c", &number1, &number2, &letter);
    printf("Number 1 = %d, Number 2 = %d, letter = %c\n", number1, number2, letter);
    return 0;
}
