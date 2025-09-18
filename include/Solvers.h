#ifndef SOLVERS_H
#define SOLVERS_H

enum compareWithZeroResultCodes {
    equalsZero = 1,
    greaterThanZero = 0
};

struct Solution linearEquationSolver(double, double);
struct Solution quadraticEquationSolver(double, double, double);

int isQuadraticEquation(double);
int isZero(double);

#endif // SOLVERS_H