//code-111

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    for(i = 0; i <= n - k; i++) {
        int found = 0;
        for(j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }
        if(!found) printf("0");
        if(i < n - k) printf(" ");
    }
    return 0;
}