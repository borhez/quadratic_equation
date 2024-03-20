#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

struct SolutionStruct {
    float root1;
    float root2;
} ;

typedef struct SolutionStruct roots;

roots solve_equation(float a, float b, float c);
#endif