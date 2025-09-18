#include "Solvers.h"
#include "utils.h"
#include "Solution.h"

int main() {
    double a = 0, b = 0, c = 0;
    setCoefficients(&a, &b, &c);
    validateCoefficients(&a, &b, &c);

    struct Solution solution = SolutionConstructor(0, 0, zeroSolutions); 
    if (isQuadraticEquation(a)) {
        solution = quadraticEquationSolver(a, b, c);
    }
    else {
        solution = linearEquationSolver(b, c);
    }

    printSolutions(solution);

    return 0;    
}