// code-33

#include <stdio.h>
int main () {
    int num, rem, a;
    printf("enter a number:");
    scanf("%d", &num);

    rem = num;
    int num2 = 0;

    for( ; num > 0 ; num = num / 10) {
        a = num % 10;
        num2 = num2 + (a * a * a);
    }
    printf("the number is %d\n", num2);
    
    if(num2 == rem) {
        printf("%d is an Armstrong number\n", rem);
    } else {
        printf("%d is not an Armstrong number\n", rem);
    }
    return 0;

}

// code-34

#include <stdio.h>
int main () {
    int n;
    char choice; // Declare choice before the loop

    do {
        printf("enter number:");
        scanf("%d", &n);

        if(n % 1 == 0 && n % n == 0) {        // == is eqauls to operator to check the value matches or not
            printf("%d is a prime number", n);    // = is the assignment operator
        } else {
            printf("%d is not a prime number", n);
        }

        printf("do you want to enter another number? (y/n):");
        scanf(" %c", &choice);
        printf("you entered: %c\n", choice);

    } while (choice == 'y' || choice == 'Y');

   
}

