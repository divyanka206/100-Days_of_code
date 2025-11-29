//code-61

#include <stdio.h>

int main() {
    int n, key, i, pos = -1;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }
    if (pos == -1) printf("-1");
    else printf("Found at index %d", pos);
    return 0;
}

//code-62

#include <stdio.h>

int main() {
    int n, i, temp;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}