//code-103

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    int total = 0, leftSum = 0;
    for (int i = 0; i < n; i++) total += nums[i];
    for (int i = 0; i < n; i++) {
        if (leftSum == total - leftSum - nums[i]) {
            printf("%d", i);
            return 0;
        }
        leftSum += nums[i];
    }
    printf("-1");
    return 0;
}