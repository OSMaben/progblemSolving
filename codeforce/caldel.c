#include <stdio.h>

void caldels(int n) {
    int result[10] = {0};
    for (int i = 1; i <= n; i++) {
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            result[digit]++;
            temp /= 10;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main() {
    int testCases[] = {5, 10, 25, 50};  
    int numTestCases = sizeof(testCases) / sizeof(testCases[0]);

    for (int i = 0; i < numTestCases; i++) {
        minCandlesRequired(testCases[i]); 
    }
    return 0;
}
