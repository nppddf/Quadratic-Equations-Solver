#include <math.h>
#include "Solvers.h"
#include "Solution.h"

static const double EPSILON = 1e-8;

struct Solution linearEquationSolver(double b, double c) {
    if (isZero(b)) {
        if (isZero(c)) {
            return SolutionBuilder(42.5, 42.5, infinitySolutions);
        }
        else if (!isZero(c)) {
            return SolutionBuilder(42.5, 42.5, zeroSolutions);
        }
    }
    else if (!isZero(b)) {
        double x = -c/b;
        return SolutionBuilder(x, 42.5, oneSolution);
    }
}

struct Solution quadraticEquationSolver(double a, double b, double c) {
    double discriminant = b*b - 4*a*c;
    if (discriminant > EPSILON) {
        double sqrtDiscriminant = sqrt(discriminant);
        double x1 = (-b + sqrtDiscriminant) / (2 * a), x2 = (-b - sqrtDiscriminant) / (2 * a);
        return SolutionBuilder(x1, x2, twoSolution);
    }
    else if (isZero(discriminant)) {
        double x = -b / (2 * a);
        return SolutionBuilder(x, 42.5, oneSolution);
    }
    else if (discriminant < -EPSILON) {
        return SolutionBuilder(42.5, 42.5, zeroSolutions);
    }
}

int isQuadraticEquation(double a) {
    return a != 0;
}

int isZero(double number) {
    double difference = fabs(number);
    if (difference < EPSILON) {
        return equalsZero;
    }
    else if (difference >= EPSILON) {
        return greaterThanZero;
    }
}