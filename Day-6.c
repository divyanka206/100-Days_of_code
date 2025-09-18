// code-11

#include <stdio.h>
int main () {
    int n;
    printf("enter a number");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d is even \n", n);
    } else {
        printf("%d is odd \n", n);
    }
    return 0;
}

// code -12

#include <stdio.h>
int main () {
    int n;
    printf("enter a number");
    scanf("%d", &n);
    if (n > 0) {
        printf("%d is positive \n", n);
    } else if (n < 0) {
        printf("%d is negative \n", n);
    } else {
        printf("number is zero \n");
    }
    return 0;
}
    
