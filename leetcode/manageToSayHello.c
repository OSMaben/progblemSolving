#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    char hello[] = "hello";
    int j = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == hello[j]) {
            j++;
        }
        if (j == 5) {
            printf("YES");
            return 0;
        }
    }

    printf("NO");
    return 0;
}
