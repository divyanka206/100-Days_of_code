// code-25

#include <stdio.h>
int main () {
    int i, a, b;
    printf("enter a number(1-5):");
    scanf("%d", &i);
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);

    switch(i) {
        case 1:
            int sum = a + b;
            printf("sum = %d\n", sum);
            break;
        case 2:
            int diff = a - b;
            printf("difference = %d\n", diff);
            break;
        case 3:
            int mul = a * b;
            printf("multiplication = %d\n", mul);
            break;
        case 4:
            if (b != 0) {
                float div = (float)a / b;
                printf("division = %.2f\n", div);
            } else {
                printf(" division by zero is not allowed\n");
            }
            break;
        case 5:
            if (b != 0) {
                int mod = a % b;
                printf("modulus = %d\n", mod);
            } else {
                printf(" modulus by zero is not allowed\n");
            }
            break;
        default:
            printf("invalid input(1-5)\n");
            break;
    }
}

// code-26

#include <stdio.h>
int main () {
    int i, n;
    printf("enter a number");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        printf(" %d ", i);
    }
    return 0;
}
