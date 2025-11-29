//code-69

#include <stdio.h>

int main() {
    int n, i, max1, max2;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    max1 = max2 = -1000000000;
    for (i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }
    printf("%d", max2);
    return 0;
}

//code-70

#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d", &n);
    int arr[n], res[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    k = k % n;
    for (i = 0; i < n; i++) res[(i + k) % n] = arr[i];
    for (i = 0; i < n; i++) printf("%d ", res[i]);
    return 0;
}
