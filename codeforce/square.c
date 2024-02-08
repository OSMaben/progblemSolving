#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        int x[4], y[4]; 
        for (int i = 0; i < 4; i++) {
            scanf("%d %d", &x[i], &y[i]);
        }

        int sideLength = abs(x[0] - x[1]); 

        int area = sideLength * sideLength;

        printf("%d\n", area);
    }
    
    return 0;
}
