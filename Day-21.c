/*#include <stdio.h>

int main() {
    int n;
    printf("enter number");
    scanf("%d", &n);
    int last = n % 10;
    printf("last digit is %d\n", last);
    int temp = n;
    int digit;

    for (; temp > 0; temp = temp/10) {
        digit = temp % 10;
    }
    printf("digit is %d\n", digit);
    int first = digit;

    int count = 0;
    temp = n;
    for (temp = n; temp > 0; temp = temp / 10) {
        count++;
    }
    printf("number of digits is %d\n", count);

    int power = 1;
    for (int i = 1; i < count; i++) {
        power = power * 10;
    }

    int middle = n % power;
    middle /= 10;
    printf("middle digit is %d\n", middle);

    int swapped_number = last * power + middle * 10 + first;
    printf("swapped number is %d\n", swapped_number);
    return 0;

}*/

//factors of num
//except the number itself
// sum of the factors = num [ perfect num]
#include <stdio.h>

int main() {
    int n;
    printf("enter number:");
    scanf("%d", &n);

    

}




