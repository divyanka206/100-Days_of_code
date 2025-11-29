//code-63

#include <stdio.h>

int main() {
    int n1, n2, i;
    scanf("%d", &n1);
    int a[n1];
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);
    scanf("%d", &n2);
    int b[n2], c[n1+n2];
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);
    for (i = 0; i < n1; i++) c[i] = a[i];
    for (i = 0; i < n2; i++) c[n1+i] = b[i];
    for (i = 0; i < n1+n2; i++) printf("%d ", c[i]);
    return 0;
}

//code-64

#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0}, digit, i, max = 0, ans = 0;
    scanf("%lld", &n);
    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }
    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            ans = i;
        }
    }
    printf("%d", ans);
    return 0;
}