#include <stdio.h>

int main () {
    int x = 10;
    
    // указатель - семейство типов данных, каждый тип представляет множество возможных ссылок (не путать со ссылками из C++) 
    // на определенные объекты в памяти
    // тип объекта, на который ссылается адрес содержится в имени типа:
    // ObjectPointerType = ObjectType*
    // пример: объявили переменную типа int* - указатель на int.
    int *pInt;

    // другие примеры
    short *pShort;
    double *pointerDouble;

    // * лучше писать вплотную к имени переменой, т.к. это более читаемо:
    // int* pa; то же самое, что int *pa;
    // НО
    int *pa, pb; // pa - указатель на int, pb - int
    int *pc, *pd; // pc, pd - указатели на int

    // любой значение типа "указатель" представляет из себя адрес в памяти и занимает одинаковый размер
    // (зависит от количества адресов в памяти)

    printf("short: %d, short *: %d\n", sizeof(short), sizeof(short*));
    printf("int: %d, int *: %d\n", sizeof(int), sizeof(int*));
    printf("long long int: %d, long long int *: %d\n", sizeof(long long int), sizeof(long long int*));
    
    return 0;
}
