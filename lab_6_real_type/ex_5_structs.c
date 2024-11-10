#include <stdio.h>
#include <stdbool.h>

// запись - семейство структурных типов данных с квалифицированным (т.е. по имени) методом доступа
// в C определяется словом struct
struct Point {
    int x; // структура (запись в терминологии C) хранит в себе несколько значений (они называются полями)
    int y; // у каждого как и у переменной есть тип и имя
};

// это просто определение структуры, мы не создали никакой переменной
// другой пример: структура для хранения сведений о категории товара в базе данных
struct Product {
    int id;
    int ammount;
    double priceOfUnit;
    double weightOfUnit;
    bool transportCarefully;
};

int main () {
    // создание переменных определенных типов
    struct Point pointA;
    struct Product apple;

    // создание с присваиванием начальных значений полей
    struct Point pointB = {2, 3};

    // доступ к значениям осуществляется через точку
    printf("B is: (%d, %d)\n", pointB.x, pointB.y);
    pointB.x = 8;
    printf("B is: (%d, %d)\n", pointB.x, pointB.y);

    // для структур определена операция присваивания
    pointA = pointB;
    printf("A is: (%d, %d)\n", pointA.x, pointA.y);

    // как и любые другие типы - структуры могут быть типами параметров/результатов функции

    return 0;
}
