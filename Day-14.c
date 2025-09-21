// code-27
#include <stdio.h>
int main () {
    int n, sum = 0, i=1, flag=1;
    printf("enter no of odd numbers to be added:");
    scanf("%d", &n);
    while( flag <= n) {
        sum += i;
        i += 2;
        flag++;
    }
    printf(" sum of first %d odd numbers is %d\n", n, sum);
    return 0;
}

// code-28
#include <stdio.h>
int main () {
    int n, prod = 1, i=2, flag=1;
    printf("enter upto which even number to be multiplied:");
    scanf("%d", &n);
    while( flag <= n) {
        prod *= i;
        i += 2;
        flag += 2;
    }
    printf(" product upto %d is %d\n", n, prod);
    return 0;
}

