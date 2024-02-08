#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int nLines = 0;
    scanf("%d", &nLines);

    int i = 0;
    char* msidn; 
    char imsi;  
    while (i < nLines) {
        scanf("%99[^,],%99s\n", msidn[i], imsi[i]);
        i++;
    }

    int nRegion = 0;
    scanf("%d", &nRegion);
    char *region; 
    char *msidn2;  
    int j = 0;
    while (j < nRegion) {
        scanf("%99[^,],%s\n", region[j], msidn2[j]);
        j++;
    }

    for (int k = 0; k < nLines; k++) {
        for (int l = 0; l < nRegion; l++) {
            if (strcmp(msidn[k], msidn2[l]) == 0) {
                printf("%s,%s,%s\n", msidn[k], imsi[k], region[l]);
            }
        }
    }

    return 0;
}
