// code - 35

/*#include <stdio.h>
int main () {
    int n;
    printf("enter number:");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if(n % i == 0)  {
            printf("%d\n", i);
        }
    }
    return 0;
}*/

// code-36

#include <stdio.h>
int main () {
    int n, m;
    printf("enter two numbers:");
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++) {
        if ( n % i == 0) {
            for(int j = 1; j <= m; j++) {
                if ( m % j == 0) {
                    if ( i == j) {
                        printf("HCF is %d\n", i*j);
                    }
                }
            }
        }
    }
    return 0;
}