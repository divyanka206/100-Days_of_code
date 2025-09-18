// ax^2 + bx + c { variable: a, b, c } [quadratic equation]
// D = b^2 - 4ac { variable: D } [discriminant]
// if D > 0 { real and distinct roots }
// if D == 0 { real and equal roots }
// if D < 0 { complex roots }
// roots of quadratic equation = (-b + sqrt(D))/2a, (-b - sqrt(D))/2a

// code -17
#include <stdio.h>
#include <math.h>
int main () {
    int a, b, c;
    float D, root1, root2;
    printf("enter the coefficients a, b and c:");
    scanf("%d %d %d", &a, &b, &c);
    D = b*b - 4*a*c;
    root1 = (-b + sqrt(D))/2*a;
    root2 = (-b - sqrt(D))/2*a;
    if (D > 0) {
        printf("real and distinct roots: %.2f and %.2f\n", root1, root2);
    } else if (D == 0) {
        printf("real and equal roots: %.2f\n", root1); 
    } else {
        printf("roots are complex\n");
    }
    return 0;
}

// code-18
#include <stdio.h>
int main () {
    int percentage;
    printf("enter your percentage:");
    scanf("%d", &percentage);
    if ( percentage >= 90 && percentage <=100) {
        printf("Grade A\n");
    } else if ( percentage >= 80 && percentage <= 89) {
        printf("Grade B\n");
    } else if ( percentage >= 70 && percentage <= 79) {
        printf("Grade C\n");
    } else if ( percentage >= 60 && percentage <= 69) {
        printf("Grade D\n");
    } else {
        printf("Grade F\n");
    }
    return 0;
}

