#include <stdio.h>
#include "Solution.h"

struct Solution SolutionConstructor(double x1, double x2, int numberOfSolutions) {
    struct Solution solution;
    solution.x1 = x1;
    solution.x2 = x2;
    solution.numberOfSolutions = numberOfSolutions;
    return solution;
}

void printSolutions(struct Solution solution) {
    int numberOfSolutions = solution.numberOfSolutions;
    switch (numberOfSolutions) {
        case zeroSolutions: {
            printf("There are no solutions.\n");
            break;
        }
        case oneSolution: {
            printf("The solution is x = %lf\n", solution.x1);
            break;
        } 
        case twoSolution: {
            printf("The solutions are x = %lf and x = %lf.\n", solution.x1, solution.x2);
            break;
        }
        case infinitySolutions: {
            printf("An infinite number of solutions.\n");
            break;
        }
        default: {
            printf("[WARN]: Undefined number of solutions: %d\n", numberOfSolutions);
        }
    }
}