#include <stdio.h>
#include <string.h>

int main() {
    char S[10000];
    scanf("%s", S);  

    int Q;
    scanf("%d", &Q); 

    while (Q--) {
        int type;
        scanf("%d", &type);  

        if (type == 0) {
            int id;
            char c;
            scanf("%d %c", &id, &c);  
            S[id - 1] = c; 
        } else {
            char P[21];
            scanf("%s", P);  
            char* ptr = strstr(S, P);

            if (ptr != NULL) {
                printf("%d\n", (int)(ptr - S) + 1);  
            } else {
                printf("-1\n"); 
            }
        }
    }

    return 0;
}
