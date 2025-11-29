//code-49

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); 
    }

    return 0;
}

//code-50

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j < i; j++) {
            printf("  "); 
        }
        for (j = 5; j >= i; j--) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}