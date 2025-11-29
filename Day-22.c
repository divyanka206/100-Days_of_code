//code-43

#include <stdio.h>

int main() {
    int n, num, digit, sum = 0, fact, i;

    printf("Enter number: ");
    scanf("%d", &n);

    num = n;  // keep a copy

    while (n > 0) {
        digit = n % 10;   // extract last digit

        // find factorial of digit
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;  // add factorial to sum
        n /= 10;      // remove last digit
    }

    if (sum == num)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}

//code-44

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        float numerator = 2 * i - 1;
        float denominator = 2 * i;
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}