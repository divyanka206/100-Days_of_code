//code-45

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (double)(2 * i) / (4 * i - 1);
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}

//code-46

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++)
      {
    
        for (j = 1; j <= 5; j++) 
        {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}