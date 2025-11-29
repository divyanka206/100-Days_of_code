// code-7

#include <stdio.h>
int main () {
    int a, b;        // a=5 , b=4
    printf("enter two numbers");
    scanf("%d %d", &a, &b);
    a = a + b;     // a=9
    b = a - b;     // b = 9 - 4 = 5
    a = a - b;     // a = 9 - 5 = 4
    printf("after swap: %d %d \n", a, b); // a=4, b=5
    return 0;
}

// code-8

#include <stdio.h>
int main () {
    int n, sum=0;
    printf("enter how many numbers to be added");
    scanf("%d", &n);
    for( int i=1; i<=n; i++) {
        sum += i;
    }
    printf("sum is %d \n", sum);
    return 0;
}


