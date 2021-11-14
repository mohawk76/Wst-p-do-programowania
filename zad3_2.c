#include <stdio.h>

int main()
{
    char c;
    printf("Wpisz kod ASCII: ");
    scanf("%hhi", &c);
    printf("Wpisałeś kod znaku %c", c);
    return 0;
}
