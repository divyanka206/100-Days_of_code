//code-110

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    for(i = 0; i <= n - k; i++) {
        int max = arr[i];
        for(j = i; j < i + k; j++) {
            if(arr[j] > max) max = arr[j];
        }
        printf("%d", max);
        if(i < n - k) printf(" ");
    }
    return 0;
}