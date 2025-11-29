// code-31

#include <stdio.h>
int main () {
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    for( ; num > 0; ) {
        int rem = num % 2;
        num = num / 2;
        printf("%d\n", rem);
    }
    return 0;
}




// code-32

/*#include <stdio.h>
int main () {
    int num , rem, rev;
    printf("enter a number:");
    scanf("%d", &num);

    rem == num;

    for( ; num >= 0; num = num / 10) {
        rev = rev + num % 10;
    }
    printf("reversed number is %d\n", rev);

    if(rev == rem) {
        printf("%d is a Palindrome", rem);
    } else {
        printf("%d is not a Palindrome", rem);
    }
    return 0;
}*/