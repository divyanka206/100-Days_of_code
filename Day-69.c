//code-119

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    int xor = 0;
    for (int i = 0; i < n; i++)
        xor ^= nums[i];
    for (int i = 0; i < n - 1; i++)
        xor ^= i;
    printf("%d", xor);
    return 0;
}