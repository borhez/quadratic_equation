#include <stdio.h>
#include "quadratic_equation.h"

int main(void) {
    printf("Решение уравнения:\n%p\n", solve_equation(1, 2, 3));
    return 0;
}