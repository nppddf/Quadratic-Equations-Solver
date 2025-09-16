#include "Solvers.h"
#include "io.h"

int main() {
    // The general view of equation is ax^2 + bx + c
    double a, b, c;
    setCoefficients(&a, &b, &c);

    if (isQuadraticEquation(a)) {
        quadraticEquationSolver(a, b, c);
    }
    else {
        linearEquationSolver(b, c);
    }

    return 0;    
}