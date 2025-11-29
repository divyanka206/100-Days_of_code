//code-65

#include <stdio.h>

int main() {
    int n, key, i, low, high, mid, pos = -1;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    low = 0, high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            pos = mid;
            break;
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (pos == -1) printf("-1");
    else printf("Found at index %d", pos);
    return 0;
}

//code-66

#include <stdio.h>

int main() {
    int n, x, i, j;
    scanf("%d", &n);
    int arr[n+1];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &x);
    for (i = n - 1; i >= 0 && arr[i] > x; i--) arr[i + 1] = arr[i];
    arr[i + 1] = x;
    for (j = 0; j <= n; j++) printf("%d ", arr[j]);
    return 0;
}