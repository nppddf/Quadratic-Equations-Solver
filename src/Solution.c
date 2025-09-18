#include <stdio.h>
#include "Solution.h"

struct Solution SolutionBuilder(double solution_1, double solution_2, int numberOfSolutions) {
    struct Solution solution;
    solution.solution_1 = solution_1;
    solution.solution_2 = solution_2;
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
            printf("The solution is x = %lf\n", solution.solution_1);
            break;
        } 
        case twoSolution: {
            printf("The solutions are x = %lf and x = %lf.\n", solution.solution_1, solution.solution_2);
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