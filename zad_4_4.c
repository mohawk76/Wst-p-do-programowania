#include <stdio.h>

int main()
{
    char name[60];
    float height;
    printf("Podaj swoje imie: ");
    scanf("%s", &name);
    printf("Podaj swoj wzrost w m: ");
    scanf("%f", &height);

    printf("%s, masz %.2f metrow wzrostu.", name, height);
    return 0;
}