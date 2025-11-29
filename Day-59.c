//code-109

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    int max_sum = 0;
    for(i = 0; i <= n - k; i++) {
        int sum = 0;
        for(j = i; j < i + k; j++) sum += arr[j];
        if(sum > max_sum || i == 0) max_sum = sum;
    }
    printf("%d", max_sum);
    return 0;
}