#include <stdio.h>

struct Vector {
    double x;
    double y;
};

void addVectors (struct Vector *vecA, const struct Vector *vecB) {
    vecA->x += vecB->x;
    vecA->y += vecB->y;
}

int main () {
    struct Vector vecA = {2.0, 3.0};
    struct Vector vecB;
    
    // на структуры можно делать указатели также, как и на любые другие значения в памяти
    struct Vector *pVecA = &vecA;
    struct Vector *pVecB = &vecB;

    // для доступа к полям можно использовать разымнование и точку
    (*pVecB).x = -4.0;

    // но есть более удобный способ
    pVecB->y = 5.0;

    // таким способом удобно передавать структуры в функции (копирование не требуется)
    addVectors(pVecA, pVecB);

    printf("A(%f; %f)\n", pVecA->x, pVecA->y);

    return 0;
}

