// code-23

#include <stdio.h>
int main () {
    int x, fine;
    printf("enter no of days:");
    scanf("%d", &x);
    if(x <= 5) {
        fine = 2 * x;
        printf("fine is %d\n", fine);
    } else if( x > 5 && x <=10) {
        fine = 10 + (x - 5) * 4;
        printf("fine is %d\n", fine);
    } else if( x > 10 && x <= 30) {
        fine = 30 + (x - 10) * 6;
        printf("fine is %d\n", fine);
    } else {
        printf("membership cancelled\n");
    }
    return 0;
}


// code-24

#include <stdio.h>
int main () {
    int units, bill;
    printf("enter units consumed");
    scanf("%d", &units);
    if(units <= 100) {
        bill = units * 5;
        printf("bill is %d\n", bill);
    } else if( units > 100 && units <=200) {
        bill = 500 + (units - 100) * 7;
        printf("bill is %d\n", bill);
    } else if( units > 200 && units <= 300) {
        bill = 1200 + (units - 200) * 10;
        printf("bill is %d\n", bill);
    } else {
        bill = 2200 + (units - 300) * 12;
        printf("bill is %d\n", bill);
    }
    return 0;
    
}




