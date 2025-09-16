#include <math.h>
#include "io.h"
#include "Solvers.h"

void linearEquationSolver(double b, double c) {
    if (b == 0) {
        if (c == 0) {
            printInfiniteSolutions();
        }
        else if (c != 0) {
            printNoSolutions();
        }
    }
    else if (b != 0) {
        double x = -c/b;
        printOneSolution(x);
    }
}

void quadraticEquationSolver(double a, double b, double c) {
    double discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a), x2 = (-b - sqrt(discriminant)) / (2 * a);
        printTwoSolutions(x1, x2);
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        printOneSolution(x);
    }
    else if (discriminant < 0) {
        printNoSolutions();
    }
}