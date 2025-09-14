// code-1

/*#include <stdio.h>
int main () {
    int a , b, sum;
    printf("enter two numbers");
    scanf("%d %d" , &a, &b);
    sum=a+b;
    printf("sum is %d \n", sum);
    return 0;
} */

// code-2

#include <stdio.h>
int main () {
    int a , b, sum, sub, mul, div;
    printf("enter two numbers");
    scanf("%d %d" , &a, &b);
    sum=a+b;
    sub=a-b;
    mul=a*b;

    if(b!=0) {
        div=a/b; 
        printf("div is %d \n", div);
    } else {
        printf(" division by zero is not allowed \n");
    }
    
    printf("sum is %d \n", sum);
    printf("sub is %d \n", sub);
    printf("mul is %d \n", mul);
    
}