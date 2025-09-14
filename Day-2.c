// code-3

#include <stdio.h>
int main () {
    int l, b , area, perimeter;
    printf("enter length and breadth of rectangle\n");
    scanf("%d %d", &l, &b);
    area = l*b;
    perimeter = 2*(l+b);
    printf("area of rectangle is %d\n", area);
    printf("perimeter of rectangle is %d\n", perimeter);
    return 0;
}

// code-4

#include <stdio.h>
int main () {
    int r;
    float area, circumference;
    printf("enter radius of circle");
    scanf("%d", &r);
    area = 3.14*r*r;
    circumference = 2*3.14*r;
    printf("area of circle is %f\n", area);
    printf("circumference of circle is %f\n", circumference);
    return 0;
}