#include <stdio.h>
#include <math.h>

// машинный эпсилон - число, на которое отличаются ближайшие различимые 
// вещественные числа

// функция для вычисления
double getEps() {
    double eps = 1.0;
    while (1.0 + eps > 1.0) eps /= 2.0;
    return eps * 2.0;
}

int main () {
    printf("0.2 + 0.1 = %.19f\n", 0.2 + 0.1);

    // неправильное сравнение
    if (0.1 + 0.2 == 0.3) printf("true\n");
    else printf("false\n");

    double eps = getEps(eps);
    printf("Eps: %.16f\n", eps);

    // правильное сравнение
    if (fabs(0.1 + 0.2 - 0.3) < eps) printf("true\n");
    else printf("false\n");
    return 0;
}
