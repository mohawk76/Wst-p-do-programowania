#include <stdio.h>
#include <string.h>

int main()
{
    char name[60];
    printf("Podaj swoje imie: ");
    scanf("%s", &name);
    int length = strlen(name) + 3;
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-*s\"\n", length, name);
    return 0;
}