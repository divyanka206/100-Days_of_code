// code-19
#include <stdio.h>
int main() { 
    float a, b, c;
    printf("enter sides of triangle:");
    scanf("%f %f %f", &a, &b, &c);
    if (a+b>c && b+c>a && c+a>b) {
        printf("it is a valid triangle \n");
        if (a==b && b==c && c==a) {
            printf("its is an equilateral triangle\n");
        } else if (a==b || b==c || c==a) {
            printf("it is an isoceles triangle \n");
        } else if (a!=b && b!=c && c!=a) {
            printf("it is a scalene triangle \n");
        } else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
            printf("it is a right angled triangle \n");
        }else {
            printf("none of the above \n");
        }
        return 0;
    } 
    else {
        printf("not a valid triangle \n");
    }
    return 0;
}
    

// code-20
/*#include <stdio.h>
int main () {
    int i;
    printf("enter number(1-7):");
    scanf("%d", &i);

    switch(i) {
        case 1:
             printf("Monday\n");
             break;
        case 2:
             printf("Tuesday\n");
             break;
        case 3:
             printf("Wednesday\n");
             break;
        case 4:
             printf("Thursday\n");
             break;
        case 5:
             printf("Friday\n");
             break;
        case 6:
             printf("Saturday\n");
             break;
        case 7:
             printf("Sunday\n");
             break;
    }
}*/
