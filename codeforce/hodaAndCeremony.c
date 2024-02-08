#include <stdio.h>
#include <limits.h>
#define MAXN 100000

int a[MAXN]; 

int main() {
    int n;
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }

    int valid_starts = 0; 

    for (int i = 0; i < n; i++) {
        int pos = i;
        int jump = 1;

        while (pos < n - 1) {
            int delta = (jump % 2 == 1) ? INT_MAX : INT_MAX;
            int next_pos = -1;
            
            for (int j = pos + 1; j < n; j++) {
                if (jump % 2 == 1 && a[j] > a[pos] && a[j] - a[pos] < delta) {
                    delta = a[j] - a[pos];
                    next_pos = j;
                } 
                else if (jump % 2 == 0 && a[pos] > a[j] && a[pos] - a[j] < delta) {
                    delta = a[pos] - a[j];
                    next_pos = j;
                }
            }

            if (next_pos == -1) break; 
            pos = next_pos; 
            jump++;
        }
        
        if (pos == n - 1) valid_starts++; 
    }

    printf("%d\n", valid_starts);

    return 0;
}
