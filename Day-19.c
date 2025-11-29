// code-37

#include <stdio.h>
int main () {
    int 
}








// code-38

#include <stdio.h>
int main () {
    int num, sum;
    printf("enter a number:");
    scanf("%d", &num);
    sum = 0;
    for (; num > 0 ;) {
        int rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("the sum of digits is %d\n", sum);
    return 0;
}