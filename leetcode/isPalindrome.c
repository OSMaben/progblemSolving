#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    char str[12]; 
    int len = 0;
    if (x < 0) {
        return false;
    }
    while (x != 0) {
        str[len++] = x % 10 + '0';
        x /= 10;
    }
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}
int main()
{
    bool result = isPalindrome(120);
    printf("%d\n", result);
}