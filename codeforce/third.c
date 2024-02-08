
#include <stdio.h>
#include <string.h>

int NumtoAdd(char* name) {
    int n = strlen(name);
    int minCount = 0;
    char currentSmiley = '\0';
    int i = 1;
    while ( i < n) {
        if(name[i - 1] == '^')
        {
            i++;
        }
        else
        {
             i++;
            minCount++;
        }
    }

    return minCount;
    
}


int main() {


    char *name = "^______^";
    int nbr = NumtoAdd(name);
    printf("%d\n", nbr);


    // int t;
    // scanf("%d", &t);

    // for (int i = 0; i < t; i++) {
    //     char name[101];
    //     scanf("%s", name); 
    //     int result = NumtoAdd(name);
    //     printf("%d\n", result);
    // }
    // return 0;
}
