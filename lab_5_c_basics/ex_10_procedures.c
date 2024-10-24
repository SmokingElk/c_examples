#include <stdio.h>

// процедуры - подпрограммы, для которых явно не предполагается возврат значения

// процедуры объявляются тут
// void ProcedureName (Param1Type Param1Name, Param2Type Param2Name...) {
//  // тело
// }

// список аргументов может быть пустым
void printHello () {
    printf("Hello!\n");
}

// пример с одним параметром
void printHelloNTimes (int n) {
    int i = 0; // обратите внимание, что тело процедуры создает новую область видимости
    // однако в отличие от блоков, локальные переменные других функций/процедур не доступны в теле данной

    while (i < n) {
        printHello(); // пример вызова процедуры
        i++;
    }
}

// пример с двумя параметрами
void printProduct (int lhv, int rhv) {
    int product = lhv * rhv;
    printf("%d * %d = %d\n", lhv, rhv, product);
}

void printFactorial (int x) {
    if (x < 0) {
        printf("Factorial is not defined for negative numbers\n");
        // оператор return для досрочного выхода из тела процедуры
        return;
    }

    // аргументы также являются локальными переменными
    int fact = 1;
    while (x > 1) {
        fact *= x;
        x--;
    }
    
    printf("fact is %d\n", fact);
}

int main () {
    printHello();
    printHelloNTimes(5);
    printProduct(2, 3);
    
    // значения выражений, которые будут подставлены в качестве значений параметров можно вычислять в момент вызова
    int x = 3;
    printFactorial(x + 1);
    return 0;
}
