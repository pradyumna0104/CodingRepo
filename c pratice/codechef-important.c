#include <math.h>
#include <stdio.h>

int main() {
    double X=53.56;
    double Y=3;
    int A = 45;
    int B = 20;
   
    // Output the absolute value of the difference of A and B
    printf("%d\n", abs(A - B));

    // Output the remainder when A is divided by B
    printf("%d\n", A % B);

    //computing the rounded off number upwards to its nearest integer and printing it
    printf("%f\n", ceil(X));
   
    //computing the rounded off number downwards to its nearest integer and printing it
    printf("%f\n", floor(X));

    //computing the value of X to the power of Y and printing it
    printf("%f\n", pow(X,Y));

    return 0;
}