#include <stdio.h>

int main() {
    int n;
    printf("enter number:");
    scanf("%d", &n);
    int mul = 1;
    for( ; n > 0; n = n / 10) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            mul = mul * digit;
        }
    }
    if (mul == 1) {
        printf("No odd digits found (assume 1) %d\n", mul);
    } else {
        printf("Product of odd digits: %d\n", mul);
    }
    return 0;
}
