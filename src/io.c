#include <stdio.h>
#include "io.h"


void printNoSolutions() {
    printf("There are no solutions.\n");
}

void printInfiniteSolutions() {
    printf("An infinite number of solutions.\n");
}

void printOneSolution(double x) {
    printf("The solution is x = %lf\n", x);
}

void printTwoSolutions(double x1, double x2) {
    printf("The solutions are x = %lf and x = %lf.\n", x1, x2);
}

void setCoefficients(double* a, double* b, double* c) {
    printf("Please, enter the coefficients a, b, c of quadratic equation (ax^2 + bx + c): ");
    
    int numberOfSuccesfullyRead = scanf(" %lf %lf %lf", a, b, c);
    while(numberOfSuccesfullyRead != 3) {
        printf("Please, enter the numeric values: ");
        while (getchar() != '\n');
        numberOfSuccesfullyRead = scanf(" %lf %lf %lf", a, b, c);
    }
    
    printf("\n");
}