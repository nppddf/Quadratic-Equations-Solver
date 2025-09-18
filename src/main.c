#include "Solvers.h"
#include "utils.h"
#include "Solution.h"

int main() {
    // The general view of equation is ax^2 + bx + c
    double a = 0, b = 0, c = 0;
    setCoefficients(&a, &b, &c);
    validateCoefficients(&a, &b, &c);

    struct Solution solution;
    if (isQuadraticEquation(a)) {
        solution = quadraticEquationSolver(a, b, c);
    }
    else {
        solution = linearEquationSolver(b, c);
    }

    printSolutions(solution);

    return 0;    
}