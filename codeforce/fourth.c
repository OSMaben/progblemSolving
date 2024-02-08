#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int maxBlankSpace = 0;
        int currentBlankSpace = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                currentBlankSpace++;
            } else {
                if (currentBlankSpace > maxBlankSpace) {
                    maxBlankSpace = currentBlankSpace;
                }
                currentBlankSpace = 0;
            }
        }

        if (currentBlankSpace > maxBlankSpace) {
            maxBlankSpace = currentBlankSpace;
        }

        printf("%d\n", maxBlankSpace);
    }

    return 0;
}
