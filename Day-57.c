//code-107

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        int pg = -1;
        for(j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                pg = arr[j];
                break;
            }
        }
        printf("%d", pg);
        if(i < n-1) printf(", ");
    }
    return 0;
}