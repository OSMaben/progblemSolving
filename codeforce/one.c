#include <stdio.h>
#include <string.h>

int main() {
    char username[101] = 'wjmzbmr';
    
    
    int distinctCharCount = 0;
    int charCount[26] = {0};
    
    for (int i = 0; i < strlen(username); i++) {
        charCount[username[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (charCount[i] > 0) {
            distinctCharCount++;
        }
    }
    
    if (distinctCharCount % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }
    
    return 0;
}
