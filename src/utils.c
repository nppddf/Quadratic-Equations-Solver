#include <stdio.h>
#include <assert.h>
#include "utils.h"

void setCoefficients(double* a, double* b, double* c) {
    printf("Please, enter the coefficients a, b, c of quadratic equation (ax^2 + bx + c): ");
    
    int numberOfSuccesfullyRead = scanf(" %lf %lf %lf", a, b, c);
    while(numberOfSuccesfullyRead != 3) {
        printf("Please, enter the numeric values: ");
        while (getchar() != '\n');
        numberOfSuccesfullyRead = scanf(" %lf %lf %lf", a, b, c);
    }
}

void validateCoefficients(double* a, double* b, double* c) {
    assert(a != NULL);
    assert(b != NULL);
    assert(c != NULL);
}