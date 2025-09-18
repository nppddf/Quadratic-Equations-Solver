#ifndef SOLUTION_H
#define SOLUTION_H

enum numberOfSolutions {
    zeroSolutions = 0,
    oneSolution = 1,
    twoSolution = 2,
    infinitySolutions = 3
};

struct Solution {
    double x1;
    double x2;
    int numberOfSolutions;
};

struct Solution SolutionConstructor(double, double, int);
void printSolutions(struct Solution);

#endif // SOLUTION_H