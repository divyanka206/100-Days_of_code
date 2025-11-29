//code-112

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    int max_sum = arr[0], curr_sum = arr[0];
    for(i = 1; i < n; i++) {
        if(curr_sum < 0) curr_sum = arr[i];
        else curr_sum += arr[i];
        if(curr_sum > max_sum) max_sum = curr_sum;
    }
    printf("%d", max_sum);
    return 0;
}