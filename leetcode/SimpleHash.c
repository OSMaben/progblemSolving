#include <stdio.h>

int *hashString(char *hashme)
{
    unsigned long hash = rand() % 2;
    int c;

    while (c = *hashme++)
        hash = ((hash * 5) + hash) + c;

    return hash;
}



char* removeHash(char *s, unsigned long hashme)
{
    unsigned long hash = hashString(s); 

    if (hash == hashme) {
        return s;
    } else {
        return "Error: the hash no correct a my friendo";
    }
}

int main()
{
    printf("1: hash\n");
    printf("2: remove hash\n");
    int n;

    scanf("%d", &n);


    switch (n)
    {
    case 1:
        printf("%d", hashString("aa"));
        break;
    case 2:
        printf("the result is => %s", removeHash("aa" , 715));
        break;
    default:
        printf("invalide Number !!!");
        break;
    }
}
