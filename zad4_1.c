#include <stdio.h>

int main()
{
    char name[60];
    char surname[60];
    printf("Podaj swoje imie, a nastepnie nazwisko: ");
    scanf("%s", &name);
    scanf("%s", &surname);
    printf("A wiec jestes %s %s", surname, name);
    return 0;
}