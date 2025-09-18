// code-16
#include <stdio.h>
int main () {
    int a, b, c;
    printf("enter three numbers");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("the largest numbers is : %d \n", a);
    } else if (b >= a && b >= c) {
        printf("the largest numbers is : %d \n", b);
    } else {
        printf("the largest numbers is : %d \n", c);
    }
    return 0;
}

// code-17
# include <stdio.h>
int main () {
    char ch;
    printf("enter a character");
    if ( scanf(" %[A-Z]", &ch) == 1) {
        printf("uppercase\n");
    } else if ( scanf(" %[a-z]", &ch) == 1) {
        printf("lowercase\n");
    } else if ( scanf(" %[0-9]", &ch) == 1) {
        printf("digit\n");
    } else {
        printf("special character\n");
    }
    return 0;
}
