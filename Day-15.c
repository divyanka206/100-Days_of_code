// code-29
#include <stdio.h>
int main() {
    int n, fact = 1;
    printf("enter a number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("factorial of %d is %d\n", n, fact);
    return 0;
}

// code-30
#include <stdio.h>
int main () {
    int num, rev=0;
    printf("enter a number:");
    scanf("%d", &num);
    int rem = num;
    for(; num > 0 ;){
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("reversed number of %d is %d \n", rem , rev);
    return 0;
}