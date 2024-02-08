#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int ans[n];
    for (int i = 0; i < n; i++) {
        ans[i] = 0;
    }

    for (int i = n - 2; i >= 0; i--) {
        if ((arr[i] < arr[i + 1] && ans[i + 1] % 2 == 0) || (arr[i] > arr[i + 1] && ans[i + 1] % 2 == 1)) {
            ans[i] = ans[i + 1] + 1;
        } else {
            ans[i] = 1;
        }
    }

    int result = 0;
    for (int i = 0; i < n; i++) {
        if (ans[i] % 2 == 1) {
            result++;
        }
    }

    printf("%d\n", result);

    return 0;
}
