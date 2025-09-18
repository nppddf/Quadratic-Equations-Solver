#include <math.h>
#include "Solvers.h"
#include "Solution.h"

struct Solution linearEquationSolver(double b, double c) {
    if (isZero(b)) {
        if (isZero(c)) {
            return SolutionConstructor(NAN, NAN, infinitySolutions);
        }
        else if (!isZero(c)) {
            return SolutionConstructor(NAN, NAN, zeroSolutions);
        }
    }
    else {
        double x = -c/b;
        return SolutionConstructor(x, NAN, oneSolution);
    }
}

struct Solution quadraticEquationSolver(double a, double b, double c) {
    const double EPSILON = 1e-8;
    double discriminant = b*b - 4*a*c;
    if (discriminant > EPSILON) {
        double sqrtDiscriminant = sqrt(discriminant);
        double x1 = (-b + sqrtDiscriminant) / (2 * a);
        double x2 = (-b - sqrtDiscriminant) / (2 * a);
        return SolutionConstructor(x1, x2, twoSolution);
    }
    else if (isZero(discriminant)) {
        double x = -b / (2 * a);
        return SolutionConstructor(x, NAN, oneSolution);
    }
    else if (discriminant < -EPSILON) {
        return SolutionConstructor(NAN, NAN, zeroSolutions);
    }
}

int isQuadraticEquation(double a) {
    return !isZero(a);
}

int isZero(double number) {
    const double EPSILON = 1e-8;
    
    double difference = fabs(number);
    if (difference < EPSILON) {
        return equalsZero;
    }
    else {
        return greaterThanZero;
    }
}