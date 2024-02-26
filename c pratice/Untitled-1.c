#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter the coefficients (a, b, c) of the quadratic equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Two distinct real roots: %.2lf and %.2lf\n", root1, root2);
            break;
        case 0:
            switch (discriminant < 0) {
                case 1:
                    root1 = -b / (2 * a);
                    root2 = sqrt(-discriminant) / (2 * a);
                    printf("Two complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n", root1, root2, root1, root2);
                    break;
                case 0:
                    root1 = -b / (2 * a);
                    printf("Two equal real roots: %.2lf and %.2lf\n", root1, root1);
                    break;
            }
            break;
    }

   return 0;
}

